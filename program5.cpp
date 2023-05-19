#include <iostream>
using namespace std;

int main()
{
    cout << "The size of char data type is " << sizeof(char) << " bytes" << endl;   //1 byte
    cout << "The size of short data type is " << sizeof(short) << " bytes" << endl; //2 byte
    cout << "The size of int data type is " << sizeof(int) << " bytes" << endl;     //4 byte
    cout << "The size of long data type is " << sizeof(long) << " bytes" << endl;   //4 byte
    cout << "The size of long long data type is " << sizeof(long long) << " bytes" << endl; //8 byte
    cout << "The size of float data type is " << sizeof(float) << " bytes" << endl;    //4 byte
    cout << "The size of double data type is " << sizeof(double) << " bytes" << endl;  //8 byte
    cout << "The size of long double data type is " << sizeof(long double) << " bytes" << endl;    //16  byte
    cout << "The size of bool data type is " << sizeof(bool) << " bytes" << endl;   //1 byte

    return 0;
}