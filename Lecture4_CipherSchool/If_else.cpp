#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // cpp interprets true as 1
    // cpp interprets false as 0

    float a, b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b; // accepting two floating point numbers as input from the user.
    // if(a>0.01)
    // {
    //     cout<<"value of a is greater than 0.01"<<endl; //if a is greater than 0.01 then the program prints the value of a.
    // }else{
    //     cout<<"value  of  a is smaller"<<endl;
    // }



    // if (a > 0.01 && b > a)
    // {
    //     cout << "The condition in if statement is correct" << endl;
    // }
    // else
    // {
    //     cout << "The condition in if statement is incorrect" << endl;
    // }



    if (a > 0.01 || b > a)
    {
        cout << "The condition in if statement is correct" << endl;
    }
    else
    {
        cout << "The condition in if statement is incorrect" << endl;
    }
    return 0;
}