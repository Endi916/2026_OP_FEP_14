#include <stdio.h>

int recSum(int n) {
	if (n >= 100) {	
		return 100;
	}
		return n + recSum(n + 1);
}

int main() {
	printf("%d\n", recSum(22));
	printf("%d\n", recSum(1));
	printf("%d\n", recSum(33));
	printf("%d\n", recSum(99));
	return 0;
}