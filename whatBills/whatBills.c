#include <stdio.h>

int main (void) {
    int twenties, tens, fifes, ones, dollarAmount;

    printf ("Enter a dollar amount: ");
    scanf ("%d", &dollarAmount);

   twenties = dollarAmount / 20;
   dollarAmount = dollarAmount - (twenties * 20);
   tens = dollarAmount / 10;
   dollarAmount = dollarAmount - (tens * 10);
   fifes = dollarAmount / 5;
   dollarAmount = dollarAmount - (fifes * 5);
   ones = dollarAmount;

   printf ("$20 Bills: %d\n", twenties);
   printf ("$10 Bills: %d\n", tens);
   printf ("$5 Bills: %d\n", fifes);
   printf ("$1 Bills: %d\n", ones);
    
    return 0;
}
