#include <stdio.h>
#include <Windows.h>
int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	int n;
	float x, min, max, sum = 0, avg;
	
	do
	{ 
		printf(" Введіть число N (від 7 до 12): ");
		scanf_s("%d", &n);
	} while (n < 7 || n > 12);

    for (int i = 1; i <= n; i++)
    {
        printf("Введіть число %d: ", i);
        scanf_s
        ("%f", &x);

        sum = sum + x;

        if (i == 1)
        {
            min = x;    
            max = x;
        }
        else
        {
            if (x < min) min = x;
            if (x > max) max = x;
        }
    }

    avg = sum / n;

    printf("Сума = %.2f\n", sum);
    printf("Середнє = %.2f\n", avg);
    printf("Мінімум = %.2f\n", min);
    printf("Максимум = %.2f\n", max);
    return 0;
}