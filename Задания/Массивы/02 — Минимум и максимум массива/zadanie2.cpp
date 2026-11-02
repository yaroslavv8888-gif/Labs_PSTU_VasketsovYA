#include <iostream> 
using namespace std; 
#include <clocale> 
int main() 
{   
    setlocale(LC_ALL, ".UTF8");
    int massiv[10] = {5, 2, 8, 2, 4, 8, 3, 2, 8, 5};
    int max = massiv[0], min = massiv[0];
    int x = 1, z = 1, c = 0, v = 0;
    for(int i = 1; i < 10; ++i)
        {
            if(max == massiv[i])
            {
                x += 1;
            
            }
            if(max < massiv[i])
            {   
                c = i;
                max = massiv[i];
                x = 1;
            }
            if(min == massiv[i])
            {
                z += 1;
            }
            if(min > massiv[i])
            {
                v = i;
                min = massiv[i];
                z = 1;
            }
    }
    cout << "Максимальный = " << max << " Кол. = " << x << " Индекс = " << c << " Номер = " << c + 1 << endl;
    cout << "Минимальный = " << min << " Кол. = " << z << " Индекс = " << v << " Номер = " << v + 1 << endl;
    return 0;

}