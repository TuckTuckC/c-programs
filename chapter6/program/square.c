#include <stdio.h>

int main(void) {

    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter Number of entries in the table: ");
    scanf("%d", &n);

    i = 1;
    while (i <=n) {
        printf("%10d%10d\n", i, i * i);
        i++;
    }
    
    return 0;
}
