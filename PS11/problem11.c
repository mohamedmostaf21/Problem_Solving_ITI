//Function to add two unsigned char NB.
#include <stdio.h>

// Function prototype (declaration)
unsigned char addUnsignedChars(unsigned char a, unsigned char b);

int main() {
    unsigned char num1 = 50;
    unsigned char num2 = 100;

    unsigned char sum = addUnsignedChars(num1, num2);

    printf("Sum of %u and %u = %u\n", num1, num2, sum); // Use %u for unsigned char

    return 0;
}

// Function to add two unsigned char variables
unsigned char addUnsignedChars(unsigned char a, unsigned char b) {
    unsigned char result = a + b;
    return  result;
}
