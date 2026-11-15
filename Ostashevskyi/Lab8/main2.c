#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define ROWS 12
#define COLS 12

int *get_element_1d(int arr[], int index)
{
    if (index < 0 || index >= N)
        return NULL;
    return &arr[index];
}

int *get_element_2d(int matr[ROWS][COLS], int i, int j)
{
    if (i < 0 || i >= ROWS || j < 0 || j >= COLS)
        return NULL;
    return &matr[i][j];
}

int main(void)
{
    srand((unsigned)time(NULL));

    int a[N];
    int m[ROWS][COLS];
    int i, j;

    for (i = 0; i < N; ++i)
        a[i] = rand() % 100;

    for (i = 0; i < ROWS; ++i)
        for (j = 0; j < COLS; ++j)
            m[i][j] = rand() % 100;

    printf("1D array:\n");
    for (i = 0; i < N; ++i)
        printf("%d ", a[i]);
    printf("\n\n");

    printf("2D array %dx%d:\n", ROWS, COLS);
    for (i = 0; i < ROWS; ++i)
    {
        for (j = 0; j < COLS; ++j)
            printf("%3d ", m[i][j]);
        printf("\n");
    }
    printf("\n");

    int idx;
    printf("Enter the index of the 1D array element (0..%d): ", N - 1);
    if (scanf("%d", &idx) != 1)
        return 1;

    int *p1 = get_element_1d(a, idx);
    if (p1 != NULL)
        printf("a[%d] = %d (address: %p)\n", idx, *p1, (void *)p1);
    else
        printf("Element with index %d does not exist (NULL)\n", idx);

    int r, c;
    printf("Enter the indices of the 2D array element (row column, 0..%d): ", ROWS - 1);
    if (scanf("%d %d", &r, &c) != 2)
        return 1;

    int *p2 = get_element_2d(m, r, c);
    if (p2 != NULL)
        printf("m[%d][%d] = %d (address: %p)\n", r, c, *p2, (void *)p2);
    else
        printf("Element [%d][%d] does not exist (NULL)\n", r, c);

    return 0;
}
