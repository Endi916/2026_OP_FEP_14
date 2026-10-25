#include <stdio.h>
#include <windows.h>

int main(void) {

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int num;
    
    printf("Введіть трьохзначне число: ");
    scanf("%d", &num);
    
    if (num < 100 || num > 999) {
        printf("Число повинно бути трьохзначним\n");
        return 0;
    }
    
    int h = num / 100;      
    int t = (num / 10) % 10; 
    int u = num % 10;      
    
    printf(" %d прописом: ", num);
    
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
    
    if (t == 1) {
        switch (u) {
            case 0: printf("десять\n"); break;
            case 1: printf("одинадцять\n"); break;
            case 2: printf("дванадцять\n"); break;
            case 3: printf("тринадцять\n"); break;
            case 4: printf("чотирнадцять\n"); break;
            case 5: printf("п'ятнадцять\n"); break;
            case 6: printf("шістнадцять\n"); break;
            case 7: printf("сімнадцять\n"); break;
            case 8: printf("вісімнадцять\n"); break;
            case 9: printf("дев'ятнадцять\n"); break;
        }
    } else {
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
        switch (u) {
            case 1: printf("один\n"); break;
            case 2: printf("два\n"); break;
            case 3: printf("три\n"); break;
            case 4: printf("чотири\n"); break;
            case 5: printf("п'ять\n"); break;
            case 6: printf("шість\n"); break;
            case 7: printf("сім\n"); break;
            case 8: printf("вісім\n"); break;
            case 9: printf("дев'ять\n"); break;
            case 0: printf("\n"); break;
        }
    }
    
    return 0;
}