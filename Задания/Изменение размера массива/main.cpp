#include <iostream>
using namespace std; 
int main() 
{
    cout << "Старый массив = 5 элементам" << endl;
    int old_s = 5;
    int* old_m = new int[old_s]{0, 1, 2, 3, 4};
    cout << "Введите размер нового массива ";
    int new_s;
    cin >> new_s; 
    int* new_m = new int[new_s];
    int l;
    if(new_s < old_s)
        {
            l = new_s;
        }
    else{l = old_s;};
    for(int i = 0; i < l; ++i) // o = 5 n = 7
        {
            new_m[i] = old_m[i];
        }
    if(new_s > old_s)
        for(int i = old_s; i < new_s ; ++i)
            {
                new_m[i] = 0;
            }
    delete [] old_m;
    old_m = new_m;
    new_m = nullptr;
    old_s = new_s;
    for(int i = 0; i < old_s; ++i)
        cout << old_m[i] << " ";
    cout << endl;
    delete[] old_m;
    old_m = nullptr;
    return 0;
}
