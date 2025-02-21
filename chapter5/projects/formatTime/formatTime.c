#include <stdio.h>

int main(void) {
	int hour24, hour12, minute;
	char *meridiem;
	printf("Enter a 24-hour time (hh:mm): ");
	scanf("%2d:%2d", &hour24, &minute);
	if (hour24 < 0 || hour24 >= 24 || minute < 0 || minute >= 60) {
		printf("Invalid time\n");
		return 0;
	}
	else if (hour24 == 0) hour12 = 12;
	else if (hour24 <= 12) hour12 = hour24;
	else if (hour24 > 12) hour12 = hour24 - 12;
	meridiem = hour24 >= 12 ? "PM" : "AM";
	printf(
		"Equivalent 12-hour time: %02d:%02d %s\n", 
		hour12, 
		minute, 
		meridiem	
	);
	return 0;
}
