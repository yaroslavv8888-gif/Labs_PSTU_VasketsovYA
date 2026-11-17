#include <cstdarg>
#include <iostream>
using namespace std;
void sum(int c, ...)
{
    va_list S;
    va_start(S, c);
    int sum = 0;
    for(int i = 0; i + 1 < c; i += 2)
        {
            int x = va_arg(S, int);
            int y = va_arg(S, int);
            sum+= x * y;
        }
    if(c % 2 != 0)
                sum+= va_arg(S, int);
    cout << sum;
    va_end(S);
}
int main()
{
    cout << "A(1, 2, 3, 4, 5, 6, 7, 8)" << " Summa = "; sum(8, 1, 2, 3, 4, 5, 6, 7, 8);
    cout << endl;
    cout << "A(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)" << " Summa = "; sum(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    cout << endl;
    cout << "A(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12)" << " Summa = "; sum(12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
    cout << endl;
    return 0;
}
