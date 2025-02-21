#include <stdio.h>

int main(void) {

	//Enter item numner:
	//Enter unit price:
	//Enter purchase date(mm/dd/yyyy): 
	
	int itemNumber, month, day, year;
	float unitPrice;
	
	printf ("Enter item number: ");
	scanf ("%d", &itemNumber);
	printf ("Enter unit price: ");
	scanf ("%f", &unitPrice);
	printf ("Enter purchase date(mm/dd/yyyy): ");
	scanf ("%d/%d/%d", &month, &day, &year);

	printf ("Item\tUnit\t\tpurchase\n\tPrice\t\tDate\n%d\t$%7.2f\t%d/%d/%d\n",
		itemNumber,
		unitPrice,
		month, day, year);

	return 0;
}
