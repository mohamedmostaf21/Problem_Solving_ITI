//C Code to draw a certain shape
//as example draw triangle 
/*
	*
   ***
  *****
 *******
*********

*/
#include <stdio.h>

int main() {
    int height, i, j;

    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    for (i = 1; i <= height; i++) {
        // Print spaces before the stars
        for (j = 1; j <= height - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
