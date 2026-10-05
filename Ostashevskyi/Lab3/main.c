#include <stdio.h>

int task = 1;

void print_binary(unsigned int n)
{
    for(int i = 7; i >= 0; i--)
    {
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
}

int main(void)
{
    printf("Ex.1.%d \n", task);
    printf("Hello, World!\n\n");
    task++;
    
    printf("Ex.1.%d\n", task);
    int number = 52;
    printf("Number:\n");
    printf("\t1.Decimal: %d\n", number);
    printf("\t2.Binary: ");
    print_binary(number);
    printf("\n");
    printf("\t3.Octal: %o\n", number);
    printf("\t4.Hex: %x\n", number);
    task++;
    
    printf("Ex.1.%d\n", task);
    float num_flot = 52.121212;
    printf("Float number: \n");
    printf("\t1.Float: %f\n", num_flot);
    printf("\t2.Float with precision: %.2f\n", num_flot);
    printf("\t3.Ecponential: %e\n", num_flot);
    printf("\t4.Flex: %g\n", num_flot);
    task++;
    
    printf("Ex.1.%d\n", task);
    char ch = 'D';
    char str[] = "Hello";
    int* pointer = &number;
    printf("Char, string, pointer: \n");
    printf("\t1.Char: %c\n", ch);
    printf("\t2. Stirng: %s\n", str);
    printf("\t3. Pointer: %p\n", pointer);
    
    //------------------------------------------------
    
    printf("Ex.2\n");
    char name_1[30], email_1[30], color_1[30], car_1[30];
    char name_2[30], email_2[30], color_2[30], car_2[30];
    
    printf("Enter your name: ");
    scanf("%29s", name_1);
    printf("Enter your email: ");
    scanf("%29s", email_1);
    printf("Enter your color: ");
    scanf("%29s", color_1);
    printf("Enter your car: ");
    scanf("%29s", car_1);
    
    printf("Enter your name: ");
    scanf("%29s", name_2);
    printf("Enter your email: ");
    scanf("%29s", email_2);
    printf("Enter your color: ");
    scanf("%29s", color_2);
    printf("Enter your car: ");
    scanf("%29s", car_2);
    
    printf("\n+----+----------------------+---------------------------+-----------------+-----------------+\n");
    printf("| %-2s | %-20s | %-25s | %-15s | %-15s |\n", "No", "Name", "Email", "Color", "Car");
    printf("+----+----------------------+---------------------------+-----------------+-----------------+\n");
    printf("| %-2d | %-20s | %-25s | %-15s | %-15s |\n", 1, name_1, email_1, color_1, car_1);
    printf("+----+----------------------+---------------------------+-----------------+-----------------+\n");
    printf("| %-2d | %-20s | %-25s | %-15s | %-15s |\n", 2, name_2, email_2, color_2, car_2);
    printf("+----+----------------------+---------------------------+-----------------+-----------------+\n");
    
    return 0;
}
