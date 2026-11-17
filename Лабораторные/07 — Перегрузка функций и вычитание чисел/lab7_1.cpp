#include<iostream> 
#include<clocale> 
using namespace std; 
int sud(int a, int b)
{
    int c = (a - b);
    return c;
}
void sud(double a1, double a2, double b1, double b2,double& resA, double& resB)
{
    resA = a1 - a2;
    resB = b1 - b2;
}
int main()
{
    setlocale(LC_ALL, ".UTF8");
    cout << "для вычитания целых чисел (a, b).";
    int a,b;
    cin >> a >> b; 
    cout << "для вычитания комплексных чисел(a1, a2, b1, b2).";
    double a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int res1 = sud(a, b);
    double resA, resB;
    sud(a1, a2, b1, b2, resA, resB);
    cout << "Вычитание целых чисел: " << res1 << endl;
    cout << "Вычитание комплексных чисел: " << resA << '+' << resB << 'i' << endl;
    return 0;
}