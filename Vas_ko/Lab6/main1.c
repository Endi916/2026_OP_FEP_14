#include <stdio.h>
#include <string.h>
#include <windows.h>

int main(void) {
    
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    char str[256];
    int vowels = 0, consonants = 0;

    printf("Введіть речення: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; ) {

        if (strncmp(&str[i], "а", 2) == 0 || strncmp(&str[i], "А", 2) == 0 ||
            strncmp(&str[i], "е", 2) == 0 || strncmp(&str[i], "Е", 2) == 0 ||
            strncmp(&str[i], "є", 2) == 0 || strncmp(&str[i], "Є", 2) == 0 ||
            strncmp(&str[i], "и", 2) == 0 || strncmp(&str[i], "И", 2) == 0 ||
            strncmp(&str[i], "і", 2) == 0 || strncmp(&str[i], "І", 2) == 0 ||
            strncmp(&str[i], "ї", 2) == 0 || strncmp(&str[i], "Ї", 2) == 0 ||
            strncmp(&str[i], "о", 2) == 0 || strncmp(&str[i], "О", 2) == 0 ||
            strncmp(&str[i], "у", 2) == 0 || strncmp(&str[i], "У", 2) == 0 ||
            strncmp(&str[i], "ю", 2) == 0 || strncmp(&str[i], "Ю", 2) == 0 ||
            strncmp(&str[i], "я", 2) == 0 || strncmp(&str[i], "Я", 2) == 0) 
        {
            vowels++;
            i += 2;
        }

        else if (strncmp(&str[i], "б", 2) == 0 || strncmp(&str[i], "Б", 2) == 0 ||
                 strncmp(&str[i], "в", 2) == 0 || strncmp(&str[i], "В", 2) == 0 ||
                 strncmp(&str[i], "г", 2) == 0 || strncmp(&str[i], "Г", 2) == 0 ||
                 strncmp(&str[i], "ґ", 2) == 0 || strncmp(&str[i], "Ґ", 2) == 0 ||
                 strncmp(&str[i], "д", 2) == 0 || strncmp(&str[i], "Д", 2) == 0 ||
                 strncmp(&str[i], "ж", 2) == 0 || strncmp(&str[i], "Ж", 2) == 0 ||
                 strncmp(&str[i], "з", 2) == 0 || strncmp(&str[i], "З", 2) == 0 ||
                 strncmp(&str[i], "й", 2) == 0 || strncmp(&str[i], "Й", 2) == 0 ||
                 strncmp(&str[i], "к", 2) == 0 || strncmp(&str[i], "К", 2) == 0 ||
                 strncmp(&str[i], "л", 2) == 0 || strncmp(&str[i], "Л", 2) == 0 ||
                 strncmp(&str[i], "м", 2) == 0 || strncmp(&str[i], "М", 2) == 0 ||
                 strncmp(&str[i], "н", 2) == 0 || strncmp(&str[i], "Н", 2) == 0 ||
                 strncmp(&str[i], "п", 2) == 0 || strncmp(&str[i], "П", 2) == 0 ||
                 strncmp(&str[i], "р", 2) == 0 || strncmp(&str[i], "Р", 2) == 0 ||
                 strncmp(&str[i], "с", 2) == 0 || strncmp(&str[i], "С", 2) == 0 ||
                 strncmp(&str[i], "т", 2) == 0 || strncmp(&str[i], "Т", 2) == 0 ||
                 strncmp(&str[i], "ф", 2) == 0 || strncmp(&str[i], "Ф", 2) == 0 ||
                 strncmp(&str[i], "х", 2) == 0 || strncmp(&str[i], "Х", 2) == 0 ||
                 strncmp(&str[i], "ц", 2) == 0 || strncmp(&str[i], "Ц", 2) == 0 ||
                 strncmp(&str[i], "ч", 2) == 0 || strncmp(&str[i], "Ч", 2) == 0 ||
                 strncmp(&str[i], "ш", 2) == 0 || strncmp(&str[i], "Ш", 2) == 0 ||
                 strncmp(&str[i], "щ", 2) == 0 || strncmp(&str[i], "Щ", 2) == 0) 
        {
            consonants++;
            i += 2;
        }

        else {
            i++;
        }
        
    }

    printf("Кількість голосних: %d\n", vowels);
    printf("Кількість приголосних: %d\n", consonants);

    return 0;
}