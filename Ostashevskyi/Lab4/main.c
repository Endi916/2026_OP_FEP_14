#include <stdio.h>
#include <math.h>

void printBinary(unsigned int n)
{
    for (int i = 7; i >= 0; i--)
    {
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
}

void printSquare(void)
{
    double a, b, c;
    printf("Enter a : ");
    scanf("%lf", &a);
    printf("Enter b : ");
    scanf("%lf", &b);
    printf("Enter c : ");
    scanf("%lf", &c);

    if (a == 0)
    {
        printf("This is not a quadratic equation\n");
        return;
    }

    double discriminant = (b * b) - (4 * a * c);
    
    if (discriminant > 0)
    {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("x1 = %lf\n", x1);
        printf("x2 = %lf\n", x2);
    }
    else if (discriminant == 0)
    {
        double x = -b / (2 * a);
        printf("x = %lf\n", x);
    }
    else {
        printf("No real roots (discriminant is negative)\n");
    }
}


int main()
{
    printf("Task 2 :\n");
    unsigned int a = 9;
    unsigned int b = 8;
    printf("Sum a + b  = ");
    printBinary(a + b);
    printf("\n");

    printf("Sub a - b  = ");
    printBinary(a - b);
    printf("\n");

    printf("Mult a * b = ");
    printBinary(a * b);
    printf("\n");

    printf("Div a / b = ");
    printBinary(a / b);
    printf("\n");

    printf("a == b ");
    printBinary(a == b);
    printf("\n");

    printf("(a/2) == b ");
    printBinary((a  / 2 ) == b);
    printf("\n");

    printf("a || b == 8");
    printBinary(a || b == 8);
    printf("\n");

    printf("a && b %% 3 == 0\n");
    printBinary(a && b % 3 == 0);
    printf("\n");

    unsigned int c = 3;
    printBinary(c);
    printf("\n");
    c++;
    printBinary(c);
    printf("\n");
    --c;
    printBinary(c);
    printf("\n");
    printf("Invert c = ");
    printBinary(~c);
    printf("\n");
    printf("Shift left 1 = ");
    printBinary(c << 1);
    printf("\n");
    printf("Shift right 1 = ");
    printBinary(c >> 1);
    printf("\n");
    
    printf("Task 3 :\n");
    unsigned int d;
    unsigned int* ptr = &d;
    printf("Enter an unsigned integer: ");
    scanf("%u", ptr);

    printf("Address (ptr): %p\n", (void*)ptr);
    printf("Value (*ptr):  %u\n", *ptr);

    printf("Task 4 :\n");
    printSquare();

    return 0;
}
