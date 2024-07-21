//Using Function Pointers as Arguments:

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

// Function that takes a function pointer as argument
int calculate(Operation operation, int a, int b) {
    return operation(a, b);
}

int main() {
    int result1 = calculate(add, 5, 3);
    int result2 = calculate(subtract, 5, 3);

    printf("Addition result: %d\n", result1);      // Outputs: 8
    printf("Subtraction result: %d\n", result2);   // Outputs: 2

    return 0;
}
