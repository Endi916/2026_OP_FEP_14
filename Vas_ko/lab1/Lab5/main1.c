#include <stdio.h>
#include <windows.h> 

int main(void) {

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double a, b;
    
    printf("Введіть перше число: ");
    scanf("%lf", &a);
    printf("Введіть друге число: ");
    scanf("%lf", &b);
    
    (a == b) ? printf("Числа рівні (%.2lf == %.2lf)\n", a, b) :
    (a > b)  ? printf("Перше число більше (%.2lf > %.2lf)\n", a, b) :
               printf("Друге число більше (%.2lf < %.2lf)\n", a, b);
               
    return 0;
}