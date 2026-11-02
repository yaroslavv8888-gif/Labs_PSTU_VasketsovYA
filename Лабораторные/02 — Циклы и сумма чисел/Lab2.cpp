#include <iostream>
using namespace std; 
int main()
{   
    setlocale(LC_ALL, "Russian");
    int sum = 0;
    for(int i = 21; i < 100; i++) // запускаем цикл, i принимает значение от 21 до 99
        if (i % 3 == 0) // проходит условие если i кратно 3, то 
        {
            sum = sum + i; // к sum прибовляется текущее значение i
        }
    cout << "Сумма целых положительных чисел, больших 20, меньших 100 и кратных 3 = " << sum << endl;
    return 0;
}