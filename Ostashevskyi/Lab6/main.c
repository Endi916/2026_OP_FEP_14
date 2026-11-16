#include <stdio.h>
#include <ctype.h>

int main(void)
{

    char str[256];
    int vowels = 0, consonants = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; )
    {

        char c = tolower((unsigned char)str[i]);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            vowels++;
            i++;
        }

        else if (c == 'b' || c == 'c' || c == 'd' || c == 'f' || c == 'g' ||
                 c == 'h' || c == 'j' || c == 'k' || c == 'l' || c == 'm' ||
                 c == 'n' || c == 'p' || c == 'q' || c == 'r' || c == 's' ||
                 c == 't' || c == 'v' || c == 'w' || c == 'x' || c == 'y' ||
                 c == 'z')
        {
            consonants++;
            i++;
        }

        else
        {
            i++;
        }

    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
