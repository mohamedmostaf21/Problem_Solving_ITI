//C Code to Count Number of ones in the binary of an integer NB.

#include <stdio.h>
int count_ones_of_binary(int NB){
	int count = 0; 
	while(NB != 0){ 
		count += NB & 1;
		
		NB = NB >> 1;
		
	}
	return count;
}
int main(){
	
	
	int NB;
    
    printf("Enter an integer: ");
    scanf("%d", &NB);
   
    if (NB < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }
    
    int onesCount = count_ones_of_binary(NB);
    
    printf("Number of 1s in binary representation of %d: %d\n", NB, onesCount);
    
}