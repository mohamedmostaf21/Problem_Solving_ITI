//. function takes un-Sorted array contains Numbers from 0 to 9 The Function Shall return True if
//all NB. s exist and false if not
#include <stdio.h>
int checkAllNumbersExist(int* arr, int size);
int main(){
	// Example usage
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // Missing 0

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Array 1 (should return true): %s\n", checkAllNumbersExist(arr1, size1) ? "true" : "false");
    printf("Array 2 (should return false): %s\n", checkAllNumbersExist(arr2, size2) ? "true" : "false");
	
	return 0;
}

int checkAllNumbersExist(int* arr, int size){
	int found[10] =  { 0 }; //all false

	for(int  i = 0; i < size; i++){
		if(arr[i] >= 0 && arr[i] <= 9){
			found[arr[i]] = 1;
		}
	}
	
	 // Check if all numbers from 0 to 9 are found
    for (int i = 0; i < 10; ++i) {
        if (found[i] != 1) {
            return 0; // If any number is not found, return false
        }
    }
	
	return 1;
	
}