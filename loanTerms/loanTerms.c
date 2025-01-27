#include <stdio.h>

int main (void) {
    float 
        loan, 
        interestRate, 
        monthlyPayment, 
        firstBalance, 
        secondBalance, 
        thirdBalance;

    printf ("Enter amount of loan: ");
    scanf ("%f", &loan);

    printf ("Enter interest rate: ");
    scanf ("%f", &interestRate);

    printf ("Enter Monthly Payment: ");
    scanf ("%f", &monthlyPayment);

    interestRate = interestRate / 100 / 12 + 1;
    firstBalance = loan * interestRate - monthlyPayment;
    secondBalance = firstBalance * interestRate - monthlyPayment;
    thirdBalance = secondBalance * interestRate - monthlyPayment;

    printf ("Balance remaining after first payment: $%.2f", firstBalance);
    printf ("Balance remaining after second payment: $%.2f", secondBalance);
    printf ("Balance remaining after third payment: $%.2f", thirdBalance);

    return 0;
}
