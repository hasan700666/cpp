#include <iostream>
using namespace std;

int g = 200; // this is a gloval varaible

void fun() // this is a funcation
{
    int l = 100; // this is a locial varaible
    cout << "\n"
         << l << "  " << g;
}

int main()
{
    cout << "hello hasan";

    int a = 10;
    float b = 1.11;
    double c = 1000.442334;
    char d = 'g';
    bool e = true;

    fun(); // colling the funcation

    cout << "\nInt a = " << a;
    cout << "\nFloat b = " << b;
    cout << "\ndouble c = " << c;
    cout << "\nchat d = " << d;
    cout << "\nbool e = " << e;

    return 0;
}
