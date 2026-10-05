#include <stdio.h>
#include <stdlib.h>

int* toPoint(int x, int y) {
	int* arr = (int*)malloc(2 * sizeof(int));
	if (arr == NULL) {
		printf("Error to allocate memory\n");
		return NULL;
	}

	arr[0] = x;
	arr[1] = y;

	return arr;
}


int main() {
	int *result = toPoint(5, 10);

	if (result != NULL) {
		printf("First number : %d\n", result[0]);
		printf("Second number : %d\n", result[1]);
		free(result);
		result = NULL;
	}

	return 0;
}