#include <stdio.h>

int main(void){

	// task 3
	int a, b, c;
	printf("Enter side a : ");
	scanf_s("%d", &a); // 3 5 5
	printf("Enter side b : ");
	scanf_s("%d", &b); // 4 5 5
	printf("Enter side c : ");
	scanf_s("%d", &c); // 5 5 3
	
	if (a + b > c && a + c > b && b + c > a) {
		printf("Triangle can be possible\n");
		if (a == b && b == c) {
			printf("Triangle is equilateral\n");
		}
		else if (a != b && b != c && a != c) {
			printf("Triangle is scalene\n");
		}
		else {
			printf("Triangle is isosceles\n");	
		}
		if ((c * c) == (a * a + b * b)) {
			printf("Triangle is rectangular\n");
		}
		else if ((c * c) < (a * a + b * b)) {
			printf("Triangle is acute-angled\n");
		}
		else {
			printf("Triangle is obtuse\n");	
		}
	}
	else {
		printf("Triangle can't be possible\n");
	}
	
	return 0;
}