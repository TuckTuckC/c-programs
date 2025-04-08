#include <stdio.h>

int main(void) {

    int firstMonth, firstDay, firstYear, secondMonth, secondDay, secondYear;
    int firstIsLarger = 0;

    printf("Enter First Date: mm/dd/yy");
    scanf("%2d/%2d/%2d", &firstMonth, &firstDay, &firstYear);
    
    printf("Enter Second Date: mm/dd/yy");
    scanf("%2d/%2d/%2d", &secondMonth, &secondDay, &secondYear);

    if (
        firstYear > secondYear || 
        firstYear == secondYear && firstMonth > secondMonth ||
        firstYear == secondYear && firstMonth == secondMonth && firstDay > secondDay
    ) firstIsLarger = 1;

    if (firstIsLarger == 0)
        printf("%d/%d/%d is earlier than %d/%d/%d",
                secondMonth,
                secondDay,
                secondYear,
                firstMonth,
                firstDay,
                firstYear
                );
    else printf("%d/%d/%d is earlier than %d/%d/%d",
                firstMonth,
                firstDay,
                firstYear,
                secondMonth,
                secondDay,
                secondYear
                );

    return 0;
}
