#include <stdio.h>
#include <windows.h>

void print_binary(unsigned char num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

int main() {

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    
    printf("1. Арифметичні оператори\n");
    int a = 10, b = 3;
    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d (додавання)\n", a + b);
    printf("a - b = %d (віднімання, унарний мінус)\n", a - b);
    printf("a * b = %d (множення)\n", a * b);
    printf("a / b = %d (ділення)\n", a / b);
    printf("a %% b = %d (остача)\n", a % b);

    int inc = a++;
    printf("після інкременту a++: %d\n\n", a);

    int dec = b--;
    printf("після декременту b--: %d\n\n", b);

    printf("2. Логічні оператори\n");
    int x = 1, y = 0;
    printf("x = %d, y = %d\n", x, y);
    printf("x && y (і): %d\n", x && y);
    printf("x || y (або): %d\n", x || y);
    printf("! (не): %d\n\n", !x);

    printf("3. Побітові оператори\n");
    unsigned char p = 0b00001100; 
    unsigned char q = 0b00000101;

    printf("p      = %3d (двійково: ", p); print_binary(p); printf(")\n");
    printf("q      = %3d (двійково: ", q); print_binary(q); printf(")\n");

    unsigned char res_and = p & q;
    printf("p & q  = %3d і (двійково: ", res_and); print_binary(res_and); printf(")\n");

    unsigned char res_or = p | q;
    printf("p | q  = %3d або (двійково: ", res_or); print_binary(res_or); printf(")\n");

    unsigned char res_xor = p ^ q;
    printf("p ^ q  = %3d додавання за модулем 2 (двійково: ", res_xor); print_binary(res_xor); printf(")\n");

    unsigned char res_not = ~p;
    printf("~ p     = %3d доповнення (двійково: ", res_not); print_binary(res_not); printf(")\n");

    unsigned char res_shl = p << 2;
    printf("p << 2 = %3d зсув вправо (двійково: ", res_shl); print_binary(res_shl); printf(")\n");

    unsigned char res_shr = p >> 1;
    printf("p >> 1 = %3d зсув вліво (двійково: ", res_shr); print_binary(res_shr); printf(")\n");

    return 0;
}