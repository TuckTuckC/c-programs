#include <stdio.h>

int main(void) {

    int grade, tens;

    printf("Enter a numerical grade: ");
    scanf("%d", &grade);
    tens = grade / 10;

    switch(tens) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5: printf("Letter grade: F\n");
                break;
        case 6: printf("Letter grade: D\n");
                break;
        case 7: printf("Letter grade: C\n");
                break;
        case 8: printf("Letter grade: B\n");
                break;
        case 9:
        case 10: printf("Letter grade: A\n");
                 break;
        default: printf("Invalid grade entry\n");
                 break;
    }
        
    return 0;
}
