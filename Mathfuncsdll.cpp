#include "Mathfuncsdll.h"
#include <stdexcept>

namespace Mathfuncs
{
    double Mymathfuncs::Add(double a, double b)
    {
        return a + b;
    }

    double Mymathfuncs::Subtract(double a, double b)
    {
        return a - b;
    }

    double Mymathfuncs::Multiply(double a, double b)
    {
        return a * b;
    }

    double Mymathfuncs::Divide(double a, double b)
    {
        if (b == 0.0)
        {
            throw std::invalid_argument("b cannot be zero!");
        }

        return a / b;
    }
}