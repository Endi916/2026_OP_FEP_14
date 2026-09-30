#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void){

	// task 2
	int number = 1;
	int pos_in_list = 20;
	int sum = 0;
	while (number <= 100)
	{
		if (number == 33 || number == pos_in_list) {
			number++;
			continue;
		}
		sum += number;
		number++;
	}
	printf("%d\n", sum);

	return 0;
}
