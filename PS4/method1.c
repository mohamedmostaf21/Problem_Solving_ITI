//Function Pointers in Structs:

#include <stdio.h>

// Define function pointers
typedef int (*Operation)(int, int);

// Define a struct to hold function pointers
typedef struct {
    Operation add;
    Operation subtract;
} Calculator;

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    Calculator calc;
    calc.add = add;
    calc.subtract = subtract;

    int result1 = calc.add(5, 3);
    int result2 = calc.subtract(5, 3);

    printf("Addition result: %d\n", result1);      // Outputs: 8
    printf("Subtraction result: %d\n", result2);   // Outputs: 2

    return 0;
}
