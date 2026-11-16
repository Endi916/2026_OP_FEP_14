#include <stdio.h>

double f(double x, double n, double a_val) {
    return n * x + a_val;
}

double bisection(double a, double b, double eps, double n, double a_val) {
    double c;

    if (f(a, n, a_val) * f(b, n, a_val) >= 0) {
        printf("There is no root in the interval or there is more than one.\n");
        return 0.0;
    }

    while ((b - a) >= eps) {
        c = (a + b) / 2.0;

        if (f(c, n, a_val) == 0.0) {
            return c;
        }

        if (f(a, n, a_val) * f(c, n, a_val) < 0) {
            b = c;
        } else {
            a = c;
        }
    }

    return (a + b) / 2.0;
}

int main(void) {

    double n = 6.0;
    double age = 17.0;
    double eps = 0.001;

    double root = bisection(-100.0, 100.0, eps, n, age);

    printf("Equation: %.0lf * x + %.0lf = 0\n", n, age);
    printf("Found root: x = %.4lf\n", root);

    return 0;
}
