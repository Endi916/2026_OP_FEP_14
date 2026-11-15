#include <stdio.h>
#include <Windows.h>
int main(void)
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
    int number  = 3;   
    int i = 1;
    int sum = 0;

    while (i <= 100)
    {
        if (i != number && i != 33)
            sum = sum + i;
        i++;
    }

    printf("Сума = %d\n", sum);
    return 0;
}