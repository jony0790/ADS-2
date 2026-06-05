#include <cstdint>

// value^n
double pow(double value, uint16_t n)
{
    double result = 1.0;

    for (uint16_t i = 0; i < n; i++)
    {
        result *= value;
    }

    return result;
}

// n!
uint64_t fact(uint16_t n)
{
    uint64_t result = 1;

    for (uint16_t i = 2; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

// x^n / n!
double calcItem(double x, uint16_t n)
{
    return pow(x, n) / (double)fact(n);
}

// e^x
double exp(double x, uint16_t count)
{
    double sum = 0.0;

    for (uint16_t n = 0; n < count; n++)
    {
        sum += calcItem(x, n);
    }

    return sum;
}

// sin(x)
double sin(double x, uint16_t count)
{
    double sum = 0.0;

    for (uint16_t n = 1; n <= count; n++)
    {
        double term =
            pow(-1.0, n - 1) *
            pow(x, 2 * n - 1) /
            (double)fact(2 * n - 1);

        sum += term;
    }

    return sum;
}

// cos(x)
double cos(double x, uint16_t count)
{
    double sum = 0.0;

    for (uint16_t n = 1; n <= count; n++)
    {
        double term =
            pow(-1.0, n - 1) *
            pow(x, 2 * n - 2) /
            (double)fact(2 * n - 2);

        sum += term;
    }

    return sum;
}
