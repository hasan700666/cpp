#include <iostream> //this is system header file

// #include "1_first_program.cpp"; //this is user defind header file

using namespace std;

int main()
{
    int a = 10, b = 10;

    // arithmetic operators

    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
    cout << "a ++ = " << a++ << endl;
    cout << "a -- = " << a-- << endl;
    cout << "++ a = " << ++a << endl;
    cout << "-- a = " << --a << endl;

    cout << "  " << endl;

    // assingment operator
    cout << "a = " << endl;

    // comparision operator
    cout << "a == b" << (a == b) << endl;
    cout << "a != b" << (a != b) << endl;
    cout << "a <= b" << (a <= b) << endl;
    cout << "a >= b" << (a >= b) << endl;
    cout << "a < b" << (a < b) << endl;
    cout << "a > b" << (a > b) << endl;

    // logical operator
    cout << "(a==b) && (a<b) = " << ((a == b) && (a < b)) << endl;
    cout << "(a==b) && (a<b) = " << ((a == b) || (a < b)) << endl;
    cout << "!(a==b) = " << (!(a == b)) << endl;

    return 0;
}
