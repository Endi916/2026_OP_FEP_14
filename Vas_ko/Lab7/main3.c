#include <stdio.h>
#include <windows.h>

double f(double x, double n, double a_val) {
    return n * x + a_val;
}

double bisection(double a, double b, double eps, double n, double a_val) {
    double c;

    if (f(a, n, a_val) * f(b, n, a_val) >= 0) {
        printf("На інтервалі немає кореня або він не один.\n");
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
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double n = 1.0;      
    double age = 19.0;    
    double eps = 0.001;   

    double root = bisection(-100.0, 100.0, eps, n, age);

    printf("Рівняння: %.0lf * x + %.0lf = 0\n", n, age);
    printf("Знайдений корінь: x = %.4lf\n", root);

    return 0;
}