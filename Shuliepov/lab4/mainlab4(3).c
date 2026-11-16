#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <math.h>

int main(void) {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	double a, b, c;
	printf("Рівняння a*x^2 + b*x + c = 0\n");
	printf("Введіть a, b, c через пробіл: ");
	if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
		printf("Некоректне введення.\n");
		return 1;
	}

	if (a == 0) {
		if (b == 0) {
			if (c == 0) printf("Безліч розв'язків.\n");
			else printf("Розв'язків немає.\n");
		}
		else {
			printf("Рівняння лінійне, x = %.4f\n", -c / b);
		}
		return 0;
	}

	double d = b * b - 4 * a * c;
	printf("Дискримінант D = %.4f\n", d);

	if (d > 0) {
		double x1 = (-b + sqrt(d)) / (2 * a);
		double x2 = (-b - sqrt(d)) / (2 * a);
		printf("Два різні дійсні корені:\n");
		printf("x1 = %.4f\n", x1);
		printf("x2 = %.4f\n", x2);
	}
	else if (d == 0) {
		double x = -b / (2 * a);
		printf("Один дійсний корінь:\n");
		printf("x = %.4f\n", x);
	}
	else {
		printf("Дійсних коренів немає.\n");
	}
	return 0;
}
