#include <stdio.h>
#include <windows.h>

int main(void) {

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int sum = 0;
    int i = 1;
    int my_number = 1; 

    while (i <= 100) {
    
        if (i == my_number || i == 33) {
            i++;
            continue; 
        }
        sum += i;
        i++;
    }

    printf("Сума перших 100 чисел без мого порядкового номеру %d та 33: %d\n", my_number, sum);

    return 0;
}