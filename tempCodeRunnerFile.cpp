#include <iostream> 
#include <climits>
using namespace std; 
inr main() 
{
    long long a; 
    cin >> a; 
    cout << static_cast<double> (a) << endl;
    cout << static_cast<float> (a)<< endl;
    cout << static_cast<char> (a)<< endl;
    cout << static_cast<int> (a)<< endl;
    cout << LLONG_MIN << endl;
    return 0;




}
