#include <stdio.h>

int main(void){

	// task 4
	int num;
	printf("Enter a three digit number (100-999) : ");
	scanf_s("%d", &num);

	if (num < 100 || num > 999) {
		printf("Error: Please enter a number between 100 and 999.\n");
		return 1;
	}

	int hundreds = num / 100;
	int tens = (num / 10) % 10; 
	int units = num % 10;

	const char* h_str[] = { "", "one hundred", "two hundred", "three hundred", "four hundred", "five hundred", "six hundred", "seven hundred", "eight hundred", "nine hundred" };
	const char* t_str[] = { "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
	const char* teen_str[] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
	const char* u_str[] = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

	printf("%s ", h_str[hundreds]);

	if (tens == 1) {
		printf("%s\n", teen_str[units]);
	}
	else {
		if (tens > 1) {
			printf("%s ", t_str[tens]);
		}
		if (units > 0) {
			printf("%s", u_str[units]);
		}
		printf("\n");
	}
	
	return 0;
}