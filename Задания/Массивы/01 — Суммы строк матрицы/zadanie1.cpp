#include <iostream> 
using namespace std; 
#include <clocale> 
#include <iomanip>
int main() 
{   
    setlocale(LC_ALL, ".UTF8");
    int massiv[4][5] = 
    {
        {5, -9, 0, 45, -50},
        {4, -12, 100, 89, -1},
        {214, 123, -954, 242, 42},
        {1, 2, 3, 4, 5}
    };
    for(int i = 0; i < 4; ++i)
    {  
        int sum = 0;
        cout << i + 1 << " строка - ";
        for(int j = 0; j < 5; ++j)  
            {   
                cout << setw(6) << massiv[i][j];
                sum += massiv[i][j];

            }
        cout << " - сумма = " << sum << endl;
        
    } 
return 0;
}