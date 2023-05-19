#include <iostream>
using namespace std;

int main()
{
    cout << "Enter 1st number(a): ";
    int a;
    cin >> a;


    cout << "Enter 2nd number(b): ";
    int b;
    cin >> b;

    int c;
    c = a;
    a = b;
    b = c;
    cout << "After swapping" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    return 0;
}