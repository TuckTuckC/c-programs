#include <stdio.h>
#define INCHES_PER_POUND 166

int main(void)
{
    
    int height, width, length;

    printf ("Enter the height of a box: ");
    scanf ("%d", &height);
    printf ("Enter the width of a box: ");
    scanf ("%d", &width);
    printf ("Enter the length of a box: ");
    scanf ("%d", &length);

    int volume = length * width * height;
    
    printf ("Volume (Cubic Inches): %d\n", volume);
    printf ("Dimentional weight (pounds): %d\n", 
        (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND);

    return 0;
};
