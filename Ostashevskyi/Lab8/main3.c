#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

void find_max_min_sum(const int arr[], int n, int *max, int *min, int *sum)
{
    *max = arr[0];
    *min = arr[0];
    *sum = 0;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > *max)
            *max = arr[i];
        if (arr[i] < *min)
            *min = arr[i];
        *sum += arr[i];
    }
}

int main(void)
{
    srand((unsigned)time(NULL));

    int a[N];
    for (int i = 0; i < N; ++i)
        a[i] = rand() % 100;

    printf("Array of %d random numbers [0..99]:\n", N);
    for (int i = 0; i < N; ++i)
        printf("%d ", a[i]);
    printf("\n\n");

    int max, min, sum;
    find_max_min_sum(a, N, &max, &min, &sum);

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    printf("Sum of elements: %d\n", sum);

    return 0;
}
