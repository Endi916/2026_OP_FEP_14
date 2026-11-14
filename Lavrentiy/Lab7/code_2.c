#include <stdio.h>

int Sum(int number)
{
    if (number > 100)
        return 0;

    return number + Sum(number + 1);
}

void main(){
    int order = 0;
    printf("\nEnter order index: ");
    scanf("%d", &order);
    printf("Sum: %d", Sum(order));
}