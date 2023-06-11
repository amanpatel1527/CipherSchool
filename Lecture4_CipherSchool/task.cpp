#include <iostream>

using namespace std;
int main()
{

    int a, b, c, d;
    cout << "Enter the value of a,b,c and d" << endl;
    cin >> a >> b >> c >> d; // accepting values from user in variables a,b,c and d.

    if (a > b && c > d)
    {
        cout << "Hahaha" << endl;
    }
    else if (a > b && c < d)
    {
        cout << "hehehe" << endl;
    }
    else if (a < b && c < d)
    {
        cout << "huhuhu" << endl;
    }
    return 0;
}