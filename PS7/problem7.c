//C Code to search for a certain element in array
#include <stdio.h>
#define MAX_SIZE 100
void scanArr(int* arr, int size);
int linearSearch(int* arr, int size, int target);

int main(){
	int arr[MAX_SIZE], size, target;
	printf("Enter the size of array: ");
	scanf("%d", &size);
	scanArr(arr, size);
	printf("Enter the element you want to search: ");
	scanf("%d", &target);
	int res = linearSearch(arr, size, target);
	if(res == -1){
		printf("Element Not Found");
	}else{
		printf("Element found at index %d", res);
	}
	
	return 0;
}

void scanArr(int* arr, int size){
	printf("Enter the array elements\n");
	for(int  i = 0; i < size; i++){
		printf("Enter Element %d: ", i+1);
		scanf("%d", &arr[i]);
	}
}

int linearSearch(int* arr, int size, int target){	
	for(int i = 0; i < size; i++){
		if(arr[i] == target)
			return i;
	}
	
	return -1;
}