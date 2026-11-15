#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <ctype.h>

int main(void)
{
    char text[200];
    int vowels = 0;
    int consonants = 0;

    printf("Enter a sentence: ");
    fgets(text, 200, stdin);

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == '\n') break;     
        if (text[i] == ' ') continue;    

        char c = tolower(text[i]);       

        if (c >= 'a' && c <= 'z')        
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    return 0;
}