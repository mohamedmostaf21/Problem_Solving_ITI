//function to divide 2 numbers and not to Forget to handle The Case x/y and y=0.
#include <stdio.h>
float Division(int operand1, int operand2);

int main(){
	int operand1, operand2;
    printf("Enter operand 1: ");
    scanf("%d", &operand1);
    printf("Enter operand 2: ");
    scanf("%d", &operand2);
	float res = Division(operand1, operand2);
	if(res  == -1){
		printf("Error: Division by zero\n");
	}else{
		printf("Result: %.2f\n", res);
	}
	
	return 0;
}

float Division(int operand1, int operand2){
	float result;
	if (operand2 != 0) {
        result = (float)operand1 / operand2;
		return result;
    } 
	return -1;
}