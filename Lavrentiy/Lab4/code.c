#include <stdio.h>

void printBinary(int number) {
    unsigned int num = (unsigned int)number;

    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}

void main(){
    int a = 9;
    int b = 7;

    printf("a=%d, b=%d \n", a, b);

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b:  %d\n", a > b);
    printf("a < b:  %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    printf("(a > 0) && (b > 0): %d\n", (a > 0) && (b > 0));
    printf("(a > 0) || (b < 0): %d\n", (a > 0) || (b < 0));
    printf("!(a > 0): %d\n", !(a > 0));

    printf("a = ");
    printBinary(a);
    printf("\n");

    printf("b = ");
    printBinary(b);
    printf("\n");

    printf("a & b = ");
    printBinary(a & b);
    printf(" (%d)\n", a & b);

    printf("a | b = ");
    printBinary(a | b);
    printf(" (%d)\n", a | b);

    printf("a ^ b = ");
    printBinary(a ^ b);
    printf(" (%d)\n", a ^ b);

    printf("~a = ");
    printBinary(~a);
    printf(" (%d)\n", ~a);

    printf("a << 1 = ");
    printBinary(a << 1);
    printf(" (%d)\n", a << 1);

    printf("a >> 1 = ");
    printBinary(a >> 1);
    printf(" (%d)\n", a >> 1);

    int x = 5;

    printf("x = %d\n", x);

    x++;
    printf("x++ = %d\n", x);

    x = 5;

    x--;
    printf("x-- = %d\n", x);

    int enteredNumber;
    int* enteredNumberPointer;
    int********** pointerToThePowerOfTen;

    printf("\nEnter a number: ");
    scanf("%d", &enteredNumber);
    enteredNumberPointer = &enteredNumber;
    printf("\nNumber: %d", enteredNumber);
    printf("\nNumber address: %p", enteredNumberPointer);
    printf("\nNumber value from pointer: %d", *enteredNumberPointer);

    printf("\n\nQuadratic equation\n\n");
    float Ax, Bx, Cx, D, x1, x2;
    while (1 == 1)
{
    printf(" Enter A: ");
    scanf("%f", &Ax);
    printf(" Enter B: ");
    scanf("%f", &Bx);
    printf(" Enter C: ");
    scanf("%f", &Cx);

    printf("\n");

    if (Ax == 0)
    {
        printf("This isnt a quadratic equation\n");

        if (Bx != 0)
        {
            float x0 = -Cx / Bx;
            printf("Linear equation root: x = %f\n", x0);
        }
        else if (Cx == 0)
        {
            printf("Infinite solutions\n");
        }
        else
        {
            printf("No solutions\n");
        }
    }
    else
    {
        D = Bx*Bx - 4*Ax*Cx;
        printf("Discriminant = %f\n", D);

        if (D > 0)
        {
            x1 = (-Bx + sqrt(D)) / (2 * Ax);
            x2 = (-Bx - sqrt(D)) / (2 * Ax);

            printf("x1 = %f\n", x1);
            printf("x2 = %f\n", x2);
        }
        else if (D == 0)
        {
            float x0 = -Bx / (2 * Ax);

            printf("x = %f\n", x0);
        }
        else
        {
            printf("No roots\n");
        }
    }
    printf("\n");
}
}

