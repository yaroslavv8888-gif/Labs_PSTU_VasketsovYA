#include<iostream>
#include<clocale>
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

void per(int a, int b)
{
    --kol[a - 1];
    int d = A[a - 1][kol[a - 1]];
    A[b - 1][kol[b - 1]] = d;
    ++kol[b - 1];
    ris();
}

void hanoi(int n, int a, int b, int c)
{
    if(n == 1)
    {
        per(a, b);
    }
    else
    {
        hanoi(n - 1, a, c, b);
        per(a, b);
        hanoi(n - 1, c, b, a);
    }
}

int main()
{
    setlocale(LC_ALL, ".UTF8");
    for(int i = 0; i < N; ++i)
    {
        A[0][i] = N - i;
    }
    kol[0] = N;

    ris();
    hanoi(N, 1, 3, 2);
    return 0;
}

