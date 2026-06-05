// Copyright 2025

#include <cstdint>

double pow(double value, uint16_t n) {
    double result = 1.0;

    for (uint16_t i = 0; i < n; ++i) {
        result *= value;
    }

    return result;
}

double fact(uint16_t n) {
    double result = 1.0;

    for (uint16_t i = 2; i <= n; ++i) {
        result *= i;
    }

    return result;
}

double calcItem(double x, uint16_t n) {
    return pow(x, n) / fact(n);
}

double exp(double x, uint16_t count) {
    double sum = 0.0;

    for (uint16_t n = 0; n < count; ++n) {
        sum += calcItem(x, n);
    }

    return sum;
}

double sin(double x, uint16_t count) {
    double sum = 0.0;

    for (uint16_t n = 1; n <= count; ++n) {
        double sign = (n % 2 == 1) ? 1.0 : -1.0;

        sum += sign * pow(x, 2 * n - 1) /
               fact(2 * n - 1);
    }

    return sum;
}

double cos(double x, uint16_t count) {
    double sum = 0.0;

    for (uint16_t n = 1; n <= count; ++n) {
        double sign = (n % 2 == 1) ? 1.0 : -1.0;

        sum += sign * pow(x, 2 * n - 2) /
               fact(2 * n - 2);
    }

    return sum;
}
