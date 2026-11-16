#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>


void print_binary(unsigned int n) {
    int started = 0;                   

    for (int i = 31; i >= 0; i--) {     
        int bit = (n >> i) & 1;         

        if (bit == 1) {
            started = 1;                
        }
        if (started == 1) {
            printf("%d", bit);
        }
    }
    if (started == 0) {                
        printf("0");
    }
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int int_val = 2026;
    double float_val = 123.45;
    char char_val = 'A';
    char str_val[] = "Тест рядок";

    printf("Десятковий: %d\n", int_val);
    printf("Вісімковий: %o\n", int_val);
    printf("Шістнадцятковий: %x\n", int_val);
    printf("Двійковий: ");
    print_binary(int_val);
    printf("\n");

    printf("Плаваюча кома (f): %f\n", float_val);
    printf("Експоненційна (e): %e\n", float_val);
    printf("Гнучкий формат: %g\n", float_val);

    printf("Символ: %c\n", char_val);
    printf("Рядок: %s\n", str_val);
    printf("Вказівник: %p\n", (void*)&int_val);

    return 0;
}



	}

}