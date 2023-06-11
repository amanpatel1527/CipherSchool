#include <iostream>

using namespace std;
int main()
{
    // int a, b;
    // cout << "Input 2 integer a and b" << endl;
    // cin >> a;

    // cin >> b;
    // Statement : a>b
    // cout << (a > b);

    // int a, b, c, d;
    // cout << "Input 4 integer a,b,cand d" << endl;
    // cin >> a >> b >> c >> d;
    // cout << (a > b && c > d); // && means and operator in C++. It is similar to short circuit evaluation. It means that if the left-hand side of the expression is false,

    int a, b, c, d;
    cout << "Input 4 integer a,b,cand d" << endl;
    cin >> a >> b >> c >> d;
    cout << (a > b || c > d); 
    return 0;
}