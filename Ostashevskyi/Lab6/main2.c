#include <stdio.h>

int main(void)
{

    int sum = 0;
    int i = 1;
    int my_number = 6;

    while (i <= 100)
    {

        if (i == my_number || i == 33)
        {
            i++;
            continue;
        }
        sum += i;
        i++;
    }

    printf("Sum of the first 100 numbers without my ordinal number %d and 33: %d\n", my_number, sum);

    return 0;
}
