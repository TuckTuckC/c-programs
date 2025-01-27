#include <stdio.h>

int main(void)
{
    float money, moneyTaxed;

    printf("Enter a dollar amount: ");
    scanf("%f", money);
    moneyTaxed = money + (money / 20.0);
    printf("With Tax Added: %.2f", moneyTaxed);
    return 0;
}
