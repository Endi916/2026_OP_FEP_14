#include <stdio.h>
#include <windows.h> 

int main(void) {

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double a, b, c;
    
    printf("Введіть довжини трьох сторін: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (a <= 0 || b <= 0 || c <= 0 || (a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Трикутник із такими сторонами не існує!\n");
        return 0;
    }
    
    printf("\nЗа сторонами трикутник є: ");
    if (a == b && b == c) {
        printf("Рівносторонній\n");
    } else if (a == b || a == c || b == c) {
        printf("Рівнобедрений\n");
    } else {
        printf("Різносторонній\n");
    }
    
    double a2 = a * a, b2 = b * b, c2 = c * c;
    
    printf("За кутами трикутник є: ");
    if ((a2 + b2 == c2) || (a2 + c2 == b2) || (b2 + c2 == a2)) {
        printf("Прямокутний\n");
    } else if ((a2 + b2 < c2) || (a2 + c2 < b2) || (b2 + c2 < a2)) {
        printf("Тупокутний\n");
    } else {
        printf("Гострокутний\n");
    }
    
    return 0;
}