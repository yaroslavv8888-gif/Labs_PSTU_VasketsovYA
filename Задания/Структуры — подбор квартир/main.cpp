#include <iostream>
using namespace std; 
struct F
{
    double pr;  // цена  
    double pl;  // площадь       
};
int main() 
{   
    cout << "Введите кол. квартир ";
    int n;
    cin >> n;
    F* A = new F[n];
    for(int i = 0; i < n; ++i)
        {
            cout << "Квартира №" << i + 1 << endl;
            cout << "Введите цену ";
            cin >> A[i].pr;
            cout << endl;
            cout << "Введите площадь ";
            cin >> A[i].pl;
        }
    double z;
    int x = 0;
    cout << "Введите максимальный свой бюджет ";
    cin >> z;
    bool t = true;
    int* B = new int[n];
    for(int i = 0; i < n; ++i)
        {
            if(z >= A[i].pr)
                {
                    B[x] = i;
                    ++x;
                }
        }
    if(x == 0)
        cout << "квартир нет"<< endl;
    else
        {
            cout << "Подходящие квартиры:" << endl;
            for(int j = 0; j < x; ++j)
                {
                    int c = B[j];
                    cout << "Номер квартиры " << c + 1 << " цена " << A[c].pr << " площадь " << A[c].pl << endl;
                }
        }
    delete [] A;
    delete [] B;
    A = nullptr;
    B = nullptr;
    return 0;
}