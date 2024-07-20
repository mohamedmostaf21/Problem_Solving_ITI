//write a function to write 1 or 0 to a certain bit in an integer NB.
#include <stdio.h>
#define MAX_SIZE 64
int main(){
	int num, digit, reverse = 0;
	int mode;
	int binary[MAX_SIZE] = {0};
	int i = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	//printf("Choose Representation 4 or 8 or 16 or 32 or 64 bit: ");
	//scanf("%d", &mode);
	printf("Binary(%d) = ", num);
	while(num != 0){
		digit = num % 2; //
		num /= 2;
		binary[i] = digit;
		i++;
	}
	
 
    for (int j = i - 1 ; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
	return 0;
}