#include <stdio.h>

int main(void) {

	int gsi, groupID, publisherCode, itemNumber, checkDigit;

	printf ("Enter ISBN ");
	scanf ("%d-%d-%d-%d-%d", &gsi, &groupID, &publisherCode, &itemNumber, &checkDigit);
	printf ("GSI Prefix: %d\nGroup Identidier: %d\nPublisher Code: %d\nItem Numner: %d\nCheck Digit: %d\n", gsi, groupID, publisherCode, itemNumber, checkDigit);

	return 0;
}
