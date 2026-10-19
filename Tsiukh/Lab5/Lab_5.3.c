#include <stdio.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int num;

    printf("Введіть тризначне число: ");
    if (scanf_s("%d", &num) != 1 || num < 100 || num > 999) {
        printf("Помилка: потрібно ввести ціле число від 100 до 999!\n");
        return 1;
    }

    int h = num / 100;       // Сотні
    int t = (num / 10) % 10; // Десятки
    int u = num % 10;        // Одиниці

    printf("%d — ", num);

    // Вивід сотень
    switch (h) {
    case 1: printf("сто "); break;
    case 2: printf("двісті "); break;
    case 3: printf("триста "); break;
    case 4: printf("чотириста "); break;
    case 5: printf("п'ятсот "); break;
    case 6: printf("шістсот "); break;
    case 7: printf("сімсот "); break;
    case 8: printf("вісімсот "); break;
    case 9: printf("дев'ятсот "); break;
    }

    // Вивід десятків та одиниць
    if (t == 1) {
        // Окремий випадок для чисел від 10 до 19
        switch (u) {
        case 0: printf("десять"); break;
        case 1: printf("одинадцять"); break;
        case 2: printf("дванадцять"); break;
        case 3: printf("тринадцять"); break;
        case 4: printf("чотирнадцять"); break;
        case 5: printf("п'ятнадцять"); break;
        case 6: printf("шістнадцять"); break;
        case 7: printf("сімнадцять"); break;
        case 8: printf("вісімнадцять"); break;
        case 9: printf("дев'ятнадцять"); break;
        }
    }
    else {
        // Десятки (20–90)
        switch (t) {
        case 2: printf("двадцять "); break;
        case 3: printf("тридцять "); break;
        case 4: printf("сорок "); break;
        case 5: printf("п'ятдесят "); break;
        case 6: printf("шістдесят "); break;
        case 7: printf("сімдесят "); break;
        case 8: printf("вісімдесят "); break;
        case 9: printf("дев'яносто "); break;
        }

        // Одиниці (1–9)
        switch (u) {
        case 1: printf("один"); break;
        case 2: printf("два"); break;
        case 3: printf("три"); break;
        case 4: printf("чотири"); break;
        case 5: printf("п'ять"); break;
        case 6: printf("шість"); break;
        case 7: printf("сім"); break;
        case 8: printf("вісім"); break;
        case 9: printf("дев'ять"); break;
        }
    }

    printf("\n");
    return 0;
}