#include <iostream>
using namespace std;

const int N = 5;
int A[3][N] = {}; // кольца на стержнях снизу вверх
int kol[3] = {}; // количество колец на стержнях


void ris()
{
    for(int i = N - 1; i >= 0; --i)
    {
        for(int j = 0; j < 3; ++j)
        {
            if(i < kol[j])
            {
                cout << "   " << A[j][i] << "   ";
            }
            else
            {
                cout << "   |   ";
            }
        }
        cout << endl;
    }
    cout << " =====  =====  =====" << endl;
    cout << "   1      2      3" << endl << endl;
}

void per(int otkuda, int kuda)
{
    int a = otkuda - 1;
    int b = kuda - 1;
    --kol[a];
    int d = A[a][kol[a]];
    A[b][kol[b]] = d;
    ++kol[b];
    ris();
}

void han(int size, int otkuda, int kuda)
{
    if (size == 1)
        per(otkuda, kuda);
    else
    {
        int buferr = 6 - otkuda - kuda;
        han(size - 1, otkuda, buferr);
        per(otkuda, kuda);
        han(size - 1, buferr, kuda);
    }
}

int main()
{
    for(int i = 0; i < N; ++i)
    {
        A[0][i] = N - i;
    }
    kol[0] = N;

    ris();
    han(N, 1, 3);
    return 0;
}

