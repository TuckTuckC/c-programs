#include <stdio.h>

int main(void) {
	int n, digits;
	printf("Enter a number up to 9999: ");
	scanf("%d", &n);

	if (n >=0 && n <= 9) digits = 1;
	else if (n >=10 && n <= 99) digits = 2;
	else if (n >=100 && n <= 999) digits = 3;
	else if (n >=1000 && n <= 9999) digits = 4;
	else digits = 0;

	if (digits != 0) printf("The number %d has %d digits\n", n, digits);
	else printf("Invalid Number\n");
	return 0;
}
