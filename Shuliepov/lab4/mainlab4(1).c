#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
void print_bin(unsigned char n) {
	for (int i = 7; i >= 0; i--) {


		printf("%d", (n >> i) & 1);
	}
}
int main(void) {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	int a = 13, b = 5;
	printf("a = %d, b = %d\n", a, b);

	printf("Арифметичні операції:\n");
	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("-a = %d\n", -a);
	printf("a * b = %d\n", a * b);
	printf("a / b = %d\n", a / b);
	printf("a %% b = %d\n", a % b);
	printf("(double)a / b = %.2f\n", (double)a / b);

	int c = a;
	printf("c++ = %d\n", c++);
	printf("після c++: c = %d\n", c);
	printf("--c = %d\n", --c);

	printf("\n --- Порівняння ---\n");
	printf("a > b = %d\n", a > b);
	printf("a < b = %d\n", a < b);
	printf("a >= b = %d\n", a >= b);
	printf("a <= b = %d\n", a <= b);
	printf("a == b = %d\n", a == b);
	printf("a != b = %d\n", a != b);

	printf("\n --- Логічні ---\n");
	printf("(a > b) && (b > 0) = %d\n", (a > b) && (b > 0));
	printf("(a < b) || (b > 0) = %d\n", (a < b) || (b > 0));
	printf("!(a > b): %d\n", !(a > b));

	printf("\n --- Побітові ---\n");
	unsigned char x = 12, y = 10;
	printf("x = "); print_bin(x); printf("(%d)\n", x);
	printf("y = "); print_bin(y); printf("(%d)\n", y);
	printf("x & y = "); print_bin(x & y); printf("\n");
	printf("x | y = "); print_bin(x | y); printf("\n");
	printf("x ^ y = "); print_bin(x ^ y); printf("\n");
	printf("~x = "); print_bin((unsigned char)~x); printf("\n");
	printf("x << 1 = "); print_bin((unsigned char)(x << 1)); printf("\n");
	printf("x >> 1 = "); print_bin(x >> 1); printf("\n");
	
	printf("\n --- Пріоритет ---\n");
	printf("2 + 3 * 4 = %d\n", 2 + 3 * 4);
	printf("(2 + 3) * 4 = %d\n", (2 + 3) * 4);

	return 0;
}