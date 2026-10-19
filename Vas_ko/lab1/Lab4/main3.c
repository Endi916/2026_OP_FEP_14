#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double a, b, c;
    double discriminant, x1, x2;

    printf("Розв'язок квадратного рівняння\n");
    printf("Введіть число a:");
    scanf("%lf", &a);
    printf("Введіть число b:");
    scanf("%lf", &b);
    printf("Введіть число c:");
    scanf("%lf", &c);

    if (a == 0) {
        printf("Це не квадратне рівняння (a = 0).\n");
        if (b != 0) {
            printf("Лінійний корінь x = %.4lf\n", -c / b);
        } 
        else {
            printf("Рівняння не має або має безліч розв'язків.\n");
        }
        return 0;
    }

    discriminant = b * b - 4 * a * c;
    printf("Дискримінант D = %.4lf\n", discriminant);

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Рівняння має два корені:\n");
        printf("Х1 = %.4lf\n", x1);
        printf("Х2 = %.4lf\n", x2);
    } 
    
    else if (discriminant == 0) {
        x1 = -b / (2 * a);
        printf("Рівняння має один корінь:\n");
        printf("X = %.4lf\n", x1);
    } 
    
    else {
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        printf("Рівняння має комплексні корені:\n");
        printf("X1 = %.4lf + %.4lfi\n", realPart, imagPart);
        printf("X2 = %.4lf - %.4lfi\n", realPart, imagPart);
    }

    return 0;
}