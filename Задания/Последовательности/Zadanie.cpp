#include <iostream>
#include <clocale>
using namespace std; 
int main()
{   
    setlocale(LC_ALL, ".UTF8");
    const long long N = 1000;
    int A[N] = {};
    int B[N] = {};
    int n;
    int t = 0;
    int h = 0;
    cout << "Вводите " << endl;
    while(cin >> n && n != 0)
    {
        A[t] = n;
        B[h] = n;
        ++t;
        ++h;
    }
    for(int i = 1; i < t; ++i)
        {   
            int y = A[i];
            bool f = false; 
            int j = i - 1;
            while(j >= 0 && f != true)
                {
                    if(A[j] > y)
                        {
                            A[j + 1] = A[j];
                            --j;
                        }
                    else { f = true;}
                }
            A[j+1] = y;
        }  
    int i = 0;
    bool f = false;
    while(i < t && f == false)
        {
            if(A[i] != B[i] || (i > 0 && A[i] == A[i - 1]))
                {   
                    f = true;
                }
            ++i;
        }
    if(f != true)
        cout << "Последовательность возрастающая " << endl;
    else {cout << "Последовательность не возрастающая " << endl;}
return 0;
}