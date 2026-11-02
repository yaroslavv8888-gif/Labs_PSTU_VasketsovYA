#include <iostream> 
using namespace std; 
#include <clocale> 
int main() 
{   
    setlocale(LC_ALL, ".UTF8");
    int n = 6;
    int m[n] = {2, 5, 9, 14, 20, 31};
    int i = 0;
    bool f = false;
    while(i < (n - 1) && f == false) 
        {
            if(m[i] >= m[i + 1])
            {f = true;}
            else {i++;}
        }
    if(f == false)
        cout << "массив структурирован";
    else {cout << "массив не структурирован";}
return 0;
}