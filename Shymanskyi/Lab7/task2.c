#include <stdio.h>

void simpleChecker(int number) {
	if (number <= 1)
	{
		printf("Number is not simple\n");
		return;
	}
	int isSimple = 1;
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0) {
			isSimple = 0;
			break;
		}
	}

	if (isSimple) {
		printf("Number is simple\n");

	}
	else {
		printf("Number is not simple\n");
	}

}


int main() {
	simpleChecker(5);
	return 0;
}