#include <stdio.h>

int main(void) {
	float knots;
	char *description;

	printf("Enter a windspeed in knots: ");
	scanf("%f", &knots);

	if (knots >= 0 && knots < 1) description = "Calm";
	else if (knots >= 1 && knots <= 3) description = "Light Air";
	else if (knots >= 4 && knots < 28) description = "Breeze";
	else if (knots >= 28 && knots < 48) description = "Gale";
	else if (knots >= 48 && knots <= 63) description = "Storm";
	else if (knots > 63) description = "Hurricane";
	else {
		printf("Invalid Knot value\n");
		return 0;
	}

	printf("Beaufort Description: %s\n", description);

	return 0;
}
