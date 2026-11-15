#include <iostream>
#include <stdexcept>
#include "Mathfuncsdll.h"

using namespace std;

int main()
{
    double a = 7.4;
    double b = 99.8;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "\nResults of mathematical operations:" << endl;

    cout << "a + b = "
        << Mathfuncs::Mymathfuncs::Add(a, b) << endl;

    cout << "a - b = "
        << Mathfuncs::Mymathfuncs::Subtract(a, b) << endl;

    cout << "a * b = "
        << Mathfuncs::Mymathfuncs::Multiply(a, b) << endl;

    cout << "a / b = "
        << Mathfuncs::Mymathfuncs::Divide(a, b) << endl;

    cout << "\nChecking division by zero:" << endl;

    try
    {
        double result =
            Mathfuncs::Mymathfuncs::Divide(a, 0.0);

        cout << "a / 0 = " << result << endl;
    }
    catch (const invalid_argument& e)
    {
        cout << "Caught exception: " << e.what() << endl;
    }

    return 0;
}
