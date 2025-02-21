#include <stdio.h>
#include <stdbool.h>

/* 
int main (void) {
	int n = 0;
	if (n >= 1 <= 10)
		printf("n is between 1 and 10\n");
	return 0;
}
*/


// Simplify the following if statement

/* 
int main (void) {
	int age = 77;
	bool teenager;
	teenager = age >= 13 && age <= 19 ? true : false;
	printf("%d\n", teenager);
	return 0;
}
*/


int main (void) {
	int areaCode = 770;
	switch (areaCode) {
		case 229: printf("Albany");
			  break;
		case 404: 
		case 678: 
		case 770: printf("Atlanta");
			  break;
		case 478: printf("Macon");
			  break;
		case 706:
		case 762: printf("Columbus");
			  break;
		case 912: printf("Savannah");
			  break;
	}
	return 0;
}
