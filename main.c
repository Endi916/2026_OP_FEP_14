#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double inputNumber;
    char string[] = "Hello, World!";

    printf("Введіть число: ");
    scanf("%lf", &inputNumber);

    int intPart = (int)inputNumber; 
    
    double *pointer = &inputNumber; 

    printf("\n=== Формати числа %g ===\n\n", inputNumber);

    printf("Десяткове: %d\n", intPart);
    printf("Вісімкове: %o\n", intPart);
    printf("Шістнадцяткове: %x\n", intPart);

    printf("Двійкове: ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (intPart >> i) & 1);
    }
    printf("\n\n");

    printf("З плаваючою комою: %f\n", inputNumber);
    printf("В експоненційній формі: %e\n", inputNumber);
    printf("В гнучкій формі: %g\n\n", inputNumber);

    printf("Символ: %c\n", (char)intPart);
    printf("Стрічка: %s\n", string);
    printf("Вказівник: %p\n", (void*)pointer);
    
    return 0;
}