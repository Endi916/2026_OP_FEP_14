#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(void) {

    int number;
    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        printf("Input data error!\n");
        return 1;
    }

    if (is_prime(number)) {
        printf("The number %d is prime.\n", number);
    } else {
        printf("The number %d is not prime.\n", number);
    }

    return 0;
}
