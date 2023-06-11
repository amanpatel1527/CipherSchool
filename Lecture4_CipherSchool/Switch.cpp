#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the value of a in b/w 1 to 3" << endl;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "The value is 1";
        break;
    case 2:
        cout << "The value  is 2";
        break;

    case 3:
        cout << "The value is 3";
        break;

    default:
        cout << "Enter a valid value";
        break;
    }
    return 0;
}