//C Code to swap two arrays, swap two variables.
#include <stdio.h>
#define MAX_SIZE 100
void scanArr(int* arr, int size);
void printArr(int* arr , int size);
void swapArr(int* arr1, int* arr2, int size);
int main(){
	int arr1[MAX_SIZE], arr2[MAX_SIZE];
	int size;
	printf("Enter the size of the two array: ");
	scanf("%d", &size);
	scanArr(arr1, size);
	scanArr(arr2, size);
	printf("Before swapping:\n");
    printf("Array 1: ");
    printArr(arr1, size);
    printf("\nArray 2: ");
    printArr(arr2, size);
	
	// Swap arrays
    swapArr(arr1, arr2, size);

    printf("\nAfter swapping:\n");
    printf("Array 1: ");
    printArr(arr1, size);
    printf("\nArray 2: ");
    printArr(arr2, size);
	
	
	return 0;
}


void scanArr(int* arr, int size){
	printf("Enter the array elements\n");
	for(int  i = 0; i < size; i++){
		printf("Enter Element %d: ", i+1);
		scanf("%d", &arr[i]);
	}
}

void printArr(int* arr , int size){
	printf("{");
	for(int i = 0; i < size; i++){
		printf("%d, ", arr[i]);
	}
	printf("}");
}

void swapArr(int * arr1, int * arr2, int size){
	int temp;
	for(int i = 0; i < size; i++){
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}