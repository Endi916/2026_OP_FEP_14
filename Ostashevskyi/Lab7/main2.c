#include <stdio.h>

int sum_recursive(int current, int max_val) {
    if (current > max_val) {
        return 0;
    }
    return current + sum_recursive(current + 1, max_val);
}

int main(void) {


    int n = 6;
    int limit = 100;

    int result = sum_recursive(n, limit);

    printf("The sum of numbers from %d to %d is: %d\n", n, limit, result);

    return 0;
}
