#include <iostream> 
#include <clocale> 
#include <cmath>
using namespace std;
int main()
{   
    cout.setf(ios_base::fixed, ios_base::floatfield); // корректного отображения мантиссы
    setlocale(LC_ALL, ".UTF8");
    int n = 10, k = 10; // k - число шагов для x
    double a = 0.1, b = 0.8, h= ((b - a) / k); // h - шаг 
    cout << "Вычисление функции" << endl;
    for(int j = 0; j <= k; j++) // внешний цикл действует пока j меньше или равен числу шагов k 
    {   
        double x = a + j * h; // считаем x на каждом шаге 
        // для заданного n;
        double SN = 0, zn = 1, st = x * x;
        for(int i = 1; i <= n; i++) // внутренний цикл повторяется точное количество раз n = 10
        {
            SN += zn * (st / (2 * i * (2 * i - 1)));
            st = st * (x * x); 
            zn = -zn;
        }

        // б) для заданной точности E (E=0.0001).
        double E = 0.0001, SE = 0, res; 
        int i = 1;
        // обновляем переменные 
        zn = 1;
        st = (x * x);
        // внутренний цикл do while живет до тех пор пока res не станет меньше E
        do 
        {
            res = zn * (st / (2 * i * (2 * i - 1)));
            SE += res;  
            st = st * (x * x); 
            zn = -zn;
            i++;
        } while(fabs(res) >= E);
        // вычеляем оьычное уроавнение для сравнения 
         double Y;
         Y = x * atan(x) - log(sqrt(1 + x * x));
        cout << "X = " << x << " SN = " << SN << " SE = " << SE << " Y = " << Y << endl;
    }
return 0;
}