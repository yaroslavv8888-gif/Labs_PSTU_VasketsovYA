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
    int c = 0, v = 0;
    int max = massiv[0][0];
    for(int i = 0; i < 4; ++i)
    {       for(int j = 0; j < 5; ++j)
            {
                if(max < massiv[i][j])
                {
                    max = massiv[i][j];
                    c = i;
                    v = j;
                }
            }
    }
    cout << "Макс. число = " << max << " / Индекс строки = " << c << " / Индекс столбца = " << v;
return 0;

}           