#include <stdio.h>

int main(void)
{

    int n;

    do
    {
        printf("Enter the count of numbers from 7 to 12: ");
        scanf("%d", &n);
        if (n < 7 || n > 12)
        {
            printf("Error! The number must be between 7 and 12.\n");
        }
    }
    while (n < 7 || n > 12);

    double num, sum, min_val, max_val;

    printf("Enter number 1: ");
    scanf("%lf", &num);
    sum = num;
    min_val = num;
    max_val = num;

    for (int i = 2; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%lf", &num);
        sum += num;

        if (num < min_val) min_val = num;
        if (num > max_val) max_val = num;
    }

    double average = sum / n;

    printf("Sum of the numbers: %.2lf\n", sum);
    printf("Arithmetic mean: %.2lf\n", average);
    printf("Minimum number: %.2lf\n", min_val);
    printf("Maximum number: %.2lf\n", max_val);

    return 0;
}
