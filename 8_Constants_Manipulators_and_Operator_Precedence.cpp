#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // ching the variable value

    int a = 10;
    float b = 21.678f;
    bool c = "B";

    cout << "the value of a was = " << a << endl;
    cout << "the value of f was = " << b << endl;
    cout << "the value of b was = " << c << endl;

    a = 100;
    b = 40.637f;
    c = "boom";

    cout << "the value of a is = " << a << endl;
    cout << "the value of f is = " << b << endl;
    cout << "the value of b is = " << c << endl;

    const int d = 299;
    const bool e = "go";
    const float f = 299;

    cout << "the value of a was = " << d << endl;
    cout << "the value of f was = " << e << endl;
    cout << "the value of b was = " << f << endl;

    // d = 100;         //error
    // e = 40.637f;     //error
    // f = "boom";      //error

    // manupolater

    int g = 10, h = 300, i = 6000;

    cout << "the value of g without setw is = " << g << endl;
    cout << "the value of h without setw is = " << h << endl;
    cout << "the value of i without setw is = " << i << endl;

    cout << "the value of g with setw is = " << setw(4) << g << endl;
    cout << "the value of h with setw is = " << setw(4) << h << endl;
    cout << "the value of i with setw is = " << setw(4) << i << endl;

    // Operator Precedence

    int j = 100 * 5 + 4 - 2;

    cout << "the j value is = " << j << endl;

    return 0;
}