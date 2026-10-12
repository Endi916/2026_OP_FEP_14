#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void binary(int n) {
	for (int i = 7; i >= 0; i--) {
		int bit = (n >> i) & 1;
		printf("%d", bit);
	}
}

int main() {

	int number = 42;
	double float_number = 123.456789;
	char letter = 'A';
	char str[] = "Lviv";
	int *ptr = &number;

	printf("Task 2\n");


	printf("Integer: %d\n", number);
	printf("Decimal: %d\n", number);
	printf("Binary:");
	binary(number);
	printf("\n");
	printf("Octal: %o\n", number);
	printf("Hexadecimal: %x\n", number);

	printf("Number: %f\n", float_number);
	printf("Floating-point number: %f\n", float_number);
	printf("Scientific: %e\n", float_number);
	printf("Flexible format: %g\n", float_number);

	printf("Character: %c\n", letter);
	printf("String: %s\n", str);
	printf("Pointer: %p\n", (void*)ptr);

	printf("Task 3\n");

	char name1[30], email1[30], color1[20];
	char name2[30], email2[30], color2[20];

	printf("Enter the name, email, and favorite color of the first student (separated by spaces):\n");
	scanf("%s %s %s", name1, email1, color1);

	printf("Enter the name, email, and favorite color of the second student (separated by spaces):\n");
	scanf("%s %s %s", name2, email2, color2);



	printf("=============================================================\n");
	printf("| %-3s | %-15s | %-20s | %-10s |\n", "N", "Name", "Email", "Color");
	printf("=============================================================\n");
	printf("| %-3d | %-15s | %-20s | %-10s |\n", 1, name1, email1, color1);
	printf("| %-3d | %-15s | %-20s | %-10s |\n", 2, name2, email2, color2);
	printf("=============================================================\n");


	return 0;

}