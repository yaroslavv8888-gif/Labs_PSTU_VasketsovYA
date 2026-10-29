#include <iostream> 
#include <clocale> 
using namespace std;

int main() 
{
    setlocale(LC_ALL, ".UTF8");
    int n; 
    cin >> n; 
    int p = n - 1, z = 1; 
    cout << "Цикл for с j++" << endl;
    for(int i = 1; i <= n; i++)
    {   
        for(int j = 1; j <= p; j++) {cout << " ";}
        p = p - 1;
        for(int j = 1; j <= z; j++) {cout << "*";}
        z = z + 1;
        cout << endl;
    }
    z = 1;
    p = n - 1;
    cout << "Цикл for с ++j" << endl;   
    for(int i = 1; i <= n; ++i)
    {
    for(int j = 1; j <= p; ++j) {cout << " ";}
    p = p - 1;
    for(int j = 1; j <= z; ++j) {cout << "*";}
    z = z + 1;
    cout << endl;
    }
    cout << "Цикл while с j++" << endl;
    p = n - 1; 
    z = 1;
    int i = 1;
    while(i <= n)
    {
        int j = 1;
        while(j <= p) {cout << " "; j++;}
        p = p - 1;
        j = 1;
        while(j <= z) {cout << "*"; j++;}
        z = z + 1;
        cout << endl;
        i++;
    }
    cout << "Цикл while с ++j" << endl;
    p = n - 1; 
    z = 1;
    i = 1;
    while(i <= n)
    {
        int j = 1;
        while(j <= p) {cout << " "; ++j;}
        p = p - 1;
        j = 1;
        while(j <= z) {cout << "*"; ++j;}
        z = z + 1;
        cout << endl;
        ++i;
    }

    return 0;
}
/* Если j++ или ++j стоят отдельно (в шаге заголовка for или отдельной строчкой в конце while), разницы в работе цикла нет никакой. Оба варианта просто 
увеличивают счётчик на 1 перед следующей проверкой условия, и треугольник рисуется абсолютно одинаково.*/