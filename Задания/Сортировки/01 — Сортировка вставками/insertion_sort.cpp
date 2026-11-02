#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".UTF8");
    int A[5] =  {7, 3, 5, 2, 6};
    for(int i = 1; i < 5; ++i )
    {
        int j = i - 1; 
        int y = A[i];
        bool f = false;
        while (j >= 0 && f != true)
        {
            if(A[j] > y)
            {
                A[j + 1] = A[j];
                --j; 
            }
            else 
            {
                f = true;
            }
        }
        A[j + 1] = y;
    }   
for (int k = 0; k < 5; ++k) 
    {
        cout << A[k] << " ";
    }
    return 0;
}