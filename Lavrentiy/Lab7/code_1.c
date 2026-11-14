#include <stdio.h>

int SimpleNumber(int number)
{
    if (number < 2)
        return 0;

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            return 0;
    }

    return 1;
}

void main(){
    int num;

    printf("Enter number: ");
    scanf("%d", &num);
    if (num < 2){
        printf("Число %d не є ні простим, ні складеним", num);
    } else{
    printf(SimpleNumber(num) ? "Число %d є простим" : "Число %d є складеним", num);
    }
}