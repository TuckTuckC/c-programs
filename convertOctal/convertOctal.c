#include <stdio.h>

int main (void)
{
    int decimal, n1, n2, n3, n4, n5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &decimal);

    n1 = decimal % 8;
    decimal /= 8;
    n2 = decimal % 8;
    decimal /= 8;
    n3 = decimal % 8;
    decimal /= 8;
    n4 = decimal % 8;
    decimal /= 8;
    n5 = decimal;

    printf("In octal, your number is: %d%d%d%d%d", n5, n4, n3, n2, n1);

    return 0;
}
