#include <cstdarg>
#include <iostream>
using namespace std;
void sum(int A, ...)
{
    va_list S;
    va_start(S, A); //  A = 6 (6, 1, 2, 3, 4, 5, 6)
    int sum = 0;
    for(int i = 0; i + 1 < A; i += 2)
        {
            int x = va_arg(S, int);
            int y = va_arg(S, int);
            sum+= x * y;
        }
    if(A % 2 != 0)
                sum+= va_arg(S, int);
    cout << sum;
    va_end(S);
}
int main()
{
    cout << "sum(6, 1, 2, 3, 4, 5, 6)" << " Summa = ";
    sum(6, 1, 2, 3, 4, 5, 6);
    return 0;
}
