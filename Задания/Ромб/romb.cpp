#include <iostream>
using namespace std; 
int main() 
{
    int d;
    cin >> d;
    int** A = new int*[d];
        for(int i = 0; i < d; ++i)
            A[i] = new int[d];
    int c = d / 2;
    for(int i = 0; i < d; ++i)
        {
            for(int j = 0; j < d; ++j)
                {
                    int dist = abs(i - c) + abs(j - c);
                    if (dist == c)
                        A[i][j] = 1;
                    else if (dist < c)
                        A[i][j] = 0;
                    else
                        A[i][j] = 6;
                }
        }   
    for(int i = 0; i < d; ++i)
        {
            for(int j = 0; j < d; ++j)
            {
                if(A[i][j] == 6)
                {cout << " ";}
                else
                {cout << A[i][j];}
            }
            cout << endl;
        }
    for (int i = 0; i < d; ++i)
        delete[] A[i];
    delete[] A;
    return 0;

}