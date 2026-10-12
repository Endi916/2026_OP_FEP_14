#include <stdio.h>
#include <windows.h>

void printBinary(unsigned char n) {
    for (int i = 7; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    printf("ЗАВДАННЯ 1: АРИФМЕТИЧНІ ТА ЛОГІЧНІ ОПЕРАТОРИ\n\n");

    // 1. Арифметичні оператори
    printf("[ Арифметичні оператори ]\n");
    int a = 10, b = 3;
    printf("a = %d, b = %d\n", a, b);
    printf("Додавання (a + b) = %d\n", a + b);
    printf("Віднімання (a - b) = %d\n", a - b);
    printf("Множення (a * b) = %d\n", a * b);
    printf("Цілочисельне ділення (a / b) = %d\n", a / b);
    printf("Остача від ділення (a %% b) = %d\n", a % b);

    int c = 5;
    printf("Початкове значення c = %d\n", c);
    printf("Префіксний інкремент (++c) = %d\n", ++c);
    printf("Постфіксний інкремент (c++) = %d (після операції c = %d)\n", c++, c);

    // 2. Логічні оператори
    printf("\n[ Логічні оператори ]\n");
    int x = 1, y = 0;
    printf("x = %d (істина), y = %d (хибність)\n", x, y);
    printf("Логічне І (x && y) = %d\n", x && y);
    printf("Логічне АБО (x || y) = %d\n", x || y);
    printf("Логічне НЕ (!x) = %d\n", !x);

    // 3. Побітові логічні оператори
    printf("\n[ Побітові логічні оператори (у двійковому форматі) ]\n");
    unsigned char num1 = 5;  // 00000101
    unsigned char num2 = 3;  // 00000011

    printf("num1 = %d -> Двійковий: ", num1);
    printBinary(num1);

    printf("num2 = %d -> Двійковий: ", num2);
    printBinary(num2);

    unsigned char res_and = num1 & num2;
    printf("Побітове І (num1 & num2) = %d -> Двійковий: ", res_and);
    printBinary(res_and);

    unsigned char res_or = num1 | num2;
    printf("Побітове АБО (num1 | num2) = %d -> Двійковий: ", res_or);
    printBinary(res_or);

    unsigned char res_xor = num1 ^ num2;
    printf("Побітове виключне АБО (num1 ^ num2) = %d -> Двійковий: ", res_xor);
    printBinary(res_xor);

    unsigned char res_not = (unsigned char)~num1;
    printf("Побітове НЕ (~num1) = %d -> Двійковий: ", res_not);
    printBinary(res_not);

    unsigned char res_shl = num1 << 1;
    printf("Зсув вліво (num1 << 1) = %d -> Двійковий: ", res_shl);
    printBinary(res_shl);

    unsigned char res_shr = num1 >> 1;
    printf("Зсув вправо (num1 >> 1) = %d -> Двійковий: ", res_shr);
    printBinary(res_shr);

    return 0;
}