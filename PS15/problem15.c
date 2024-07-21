//C Code to check if a certain NB is repeated in the array or not?
#include <stdio.h>
#define MAX_SIZE 100

void scanArr(int* arr, int size);
int elementIsRepeated(int* arr, int size, int element);
int main(){
	int element, arr[MAX_SIZE], size;
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	scanArr(arr, size);
	
	//algo to check an element is repeated	
	printf("Enter the element that you want to know: ");
	scanf("%d", &element);
	
	int RepeatedNumber = elementIsRepeated(arr, size, element);

    // Output the result
	if(RepeatedNumber != -1 && RepeatedNumber != -2){
		printf("The repeated number is: %d\n", RepeatedNumber);
	}else if(RepeatedNumber == -2){
		printf("The number is not repeated\n"); 
	}else{
		printf("The number is not found\n"); 
	}
	
	
	return 0;
}

void scanArr(int* arr, int size){
	printf("Enter the array elements\n");
	for(int i = 0; i < size; i++){
		printf("Enter Element %d: ", i+1);
		scanf("%d", &arr[i]);
	}	
}

int elementIsRepeated(int* arr, int size, int element){
	int freq[MAX_SIZE] = {0};
	for(int i = 0; i < size; i++){
		freq[arr[i]]++;
	}
	
	for(int i = 0; i < MAX_SIZE; i++){
		if(freq[i] == 2 && i == element){
			return i;
		}else if(freq[i] == 1 && i == element){
			return -2;
		}
	}
	return -1;
}