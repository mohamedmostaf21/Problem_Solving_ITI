//. Function takes un-Sorted array from 0 to 100 There is only one NB not repeated in the array Function Shall return This NB.
#include <stdio.h>
#define RANGE 101 //Numbers from 0 to 100
//first soln
int findNonRepeatedNumber(int* arr, int size);
//second soln
int findNonRepeatedNumberWithFreq(int* arr, int size);
int main() {
    // Example array with numbers from 0 to 100 and one number appearing only once
    int arr[] = {1, 5, 2, 4, 0, 3, 1, 2, 5, 0, 4, 3, 98, 99, 99, 98, 50};
    int size = sizeof(arr) / sizeof(int);

    // Find the non-repeated number
    int nonRepeatedNumber = findNonRepeatedNumberWithFreq(arr, size);

    // Output the result
	if(nonRepeatedNumber != -1){
		printf("The non-repeated number is: %d\n", nonRepeatedNumber);
	}else{
		printf("The non-repeated number is not found\n"); 
	}
    return 0;
}

int findNonRepeatedNumber(int* arr, int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result ^= arr[i];
		printf("%d\n", result);
    }
    return result;
}

int findNonRepeatedNumberWithFreq(int* arr, int size){
	int freq[RANGE] = {0};
	
	for(int i = 0; i < size; i++){
		freq[arr[i]]++;
	}
	
	for(int i = 0; i < RANGE; i++){
		if(freq[i] == 1){
			return i;
		}
	}
	
	//non repeated not found 
	return -1;
	
	
}