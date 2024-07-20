//C Code to pass arguments by reference.
#include <stdio.h>

void increment(int *num);

int main() {
    int number;
	printf("Enter a number: ");
	scanf("%d", &number);

    printf("Before increment: number = %d\n", number);

    increment(&number);

    printf("After increment: number = %d\n", number);

    return 0;
}


void increment(int *num) {
    (*num)++;
}