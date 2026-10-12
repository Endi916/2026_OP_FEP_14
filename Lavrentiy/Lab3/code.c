#include <stdio.h>

void main()
{
    int number = 148;

    printf("Number: %d \n", number);
    printf("OCT number: %o \n", number);
    printf("HEX number: %x \n", number);

    int num = number;
    int i = 1;
    int binary = 0;
    while (num > 0){
        int bit = num % 2;
        binary += bit * i;
        i *= 10;
        num = floor(num / 2);
    }
    printf("Binary number: %d \n", binary);

    double number2 = 13.12345678901234;
    printf("Float number: %f \n", number2);
    printf("Exponential number: %e \n", number2);
    printf("Flexible number: %g \n", number2);

    char character = 'W';
    printf("Character: %c \n", character);

    char* text = "This is a text";
    printf("Text: %s \n", text);

    int number3 = 333;
    int* pointer = &number3;
    printf("Pointer: %p \n", pointer);


    int count;

    printf("Enter student count: ");
    scanf("%d", &count);

    char surname[100][100];
    char email[100][100];
    char color[100][100];

    for (int i = 0; i < count; i++)
    {
        printf("\nStudent №%d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", surname[i]);

        printf("Email: ");
        scanf(" %[^\n]", email[i]);

        printf("Color: ");
        scanf(" %[^\n]", color[i]);
    }

    printf("\n");
    printf("| %-5s | %-10s | %-20s | %-10s |\n",
           "№", "Name", "Email", "Color");

    for (int i = 0; i < count; i++)
    {
        printf("| %-5d | %-10s | %-20s | %-10s |\n",
               i + 1, surname[i], email[i], color[i]);
    }
}