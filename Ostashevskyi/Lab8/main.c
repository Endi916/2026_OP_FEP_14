#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int *generate_array(void)
{
    int *arr = (int *)malloc(N * sizeof(int));
    if (arr == NULL)
        return NULL;

    for (int i = 0; i < N; ++i)
        arr[i] = rand() % 100;

    return arr;
}

int main(void)
{
    srand((unsigned)time(NULL));

    int *a = generate_array();
    if (a == NULL)
    {
        printf("Memory allocation error\n");
        return 1;
    }

    printf("Array of %d random numbers [0..99]:\n", N);
    for (int i = 0; i < N; ++i)
        printf("%d ", a[i]);
    printf("\n");

    free(a);
    return 0;
}
