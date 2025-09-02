#include <iostream>

using namespace std;

int c = 1000; // i am a gloval variable

int main()
{

    // blind in data types
    int a = 10;
    int b = 20;
    int c = a + b;
    cout << "the a are value is " << a << "and the b are value is " << b << endl;
    cout << "the sum is " << c << endl;
    cout << "the global variable c value is " << ::c << endl;

    // float, long double literals
    float f = 20.123;             // the data type of f is double
    float f2 = 20.123f;           // the data type of f2 is float
    float f3 = 20.123F;           // the data type of f3 is float
    long double d = 5748.54637;   // the data type of d is double
    long double d2 = 5748.54637l; // the data type of d2 is double
    long double d3 = 5748.54637L; // the data type of d3 is double

    // refrance variable

    int age = 20;
    int &age2 = age;

    cout << "the value of age is " << a << " and the value of age2 is " << b << endl;

    // typecasting
    float A = 200.54637f;

    cout << (int)A << endl;
    cout << int(A) << endl;

    return 0;
}
