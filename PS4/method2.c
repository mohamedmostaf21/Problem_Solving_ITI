//Array of Function Pointers:
#include <stdio.h>

// Define function pointers
typedef int (*Operation)(int, int);

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    // Array of function pointers
    Operation operations[2] = { add, subtract };

    int result1 = operations[0](5, 3);
    int result2 = operations[1](5, 3);

    printf("Addition result: %d\n", result1);      // Outputs: 8
    printf("Subtraction result: %d\n", result2);   // Outputs: 2

    return 0;
}
