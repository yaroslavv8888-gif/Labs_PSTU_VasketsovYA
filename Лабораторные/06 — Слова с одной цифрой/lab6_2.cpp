#include<iostream> 
#include <sstream> 
#include<clocale> 
using namespace std; 
int main()
{
    setlocale(LC_ALL, ".UTF8");
    cout << "Введите строку: ";
    string s;
    getline(cin, s, '.');
    istringstream words(s);
    cout << "Все слова, которые содержат по одной цифре: ";
    while(words >> s)
        {
            int p = 0;
            for(char ch : s)
                {
                    if(ch >= '0' && ch <= '9')
                        {
                            p += 1;
                        }
                }
            if(p == 1)
                {
                    cout << s << " ";
                }

        }
    return 0;
}