#include <iostream> 
#include <clocale> 
#include <iomanip>
using namespace std; 
int main () 
{   
    setlocale(LC_ALL, ".UTF8");
    const int N = 6; 
    const int M = 5;
    int A[N][M] = {};
    cout << "Массив: " << endl;
    for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < M; ++j)
            {
                A[i][j] = rand() % 100 - 49;
                cout << setw(6) << A[i][j] << " ";
            }
            cout << endl << endl;
        }
    int a, b; 
    do 
    {
        cout << "Введите сначало А потом В (от 1 до 6)";
        cin >> a >> b;
    } while (a < 1 || a > 6 || b < 1 || b > 6 || a > b);

    for(int i = a - 1; i < b; ++i)
        {
            for (int j = 0; j < M; ++j)
                {
                    A[i][j] = 0;
                }
        }
    int k = 0;
    int z = a - 1;
    for(int i = 0; i < N - b; ++i) // a = 3 b = 5 надо 3 раза 
    {
        for (int j = 0; j < M; ++j)
            {
                int t = A[z][j];
                A[z][j] = A[b + k][j];
                A[b + k][j] = t;
            }
        ++z;
        ++k;
    }
     for (int i = 0; i < N; ++i)
        {
            for (int j = 0; j < M; ++j)
            {
                cout << setw(6) << A[i][j] << " ";
            }
            cout << endl << endl;
        }
return 0;
}