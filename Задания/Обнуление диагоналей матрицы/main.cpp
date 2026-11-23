#include <iostream>
#include <iomanip>
using namespace std; 
int main() 
{
    cout << "Введи размерность квадратного массива ";
    int n;
    cin >> n;
    int rad = n, stolb = n;
    int** M = new int*[rad];
    for(int i = 0; i < rad; ++i )
        M[i] = new int[stolb];
    cout << "Массив до"<< endl;
    for(int i = 0; i < rad; ++i)
        {   
            for(int j = 0; j < stolb; ++j)
            {
            M[i][j] = rand() % 100 - 49; 
            cout << setw(4) << M[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        cout << "Массив после"<< endl;
    for(int i = 0; i < rad; ++i)
        {   
            for(int j = 0; j < stolb; ++j)
            {
            if(j == i || i == n - 1 - j)
                M[i][j] = 0;
            cout << setw(4) << M[i][j] << " ";
            }
            cout << endl;
        }
        for (int i = 0; i < rad; ++i)
        delete[] M[i];

    delete[] M;
    return 0;
}