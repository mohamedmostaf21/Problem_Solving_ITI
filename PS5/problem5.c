//Sorting C Code
#include <stdio.h>
#define MAX_SIZE 100
void scanArr(int* arr, int size);
void printArr(int*arr , int size);
void merge(int* arr, int l, int m, int r);
void mergeSort(int* arr, int l, int r);



int main(){
	int arr[MAX_SIZE], size;
	printf("Enter the size of array: ");
	scanf("%d", &size);
	scanArr(arr, size);
	printf("Before Sorting\n");
	printArr(arr, size);
	mergeSort(arr, 0, size - 1);
	printf("\nAfter Sorting\n");
	printArr(arr, size);
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

void merge(int* arr, int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 = r - m; 
  
    // Create temp arrays 
    int L[n1], R[n2]; 
  
    // Copy data to temp arrays 
    // L[] and R[] 
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1 + j]; 
  
    // Merge the temp arrays back 
    // into arr[l..r] 
    // Initial index of first subarray 
    i = 0; 
  
    // Initial index of second subarray 
    j = 0; 
  
    // Initial index of merged subarray 
    k = l; 
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; 
            i++; 
        } 
        else { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    // Copy the remaining elements 
    // of L[], if there are any 
    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    // Copy the remaining elements of 
    // R[], if there are any 
    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 

void mergeSort(int* arr, int l, int r) 
{ 
    if (l < r) { 
        // Same as (l+r)/2, but avoids 
        // overflow for large l and r 
        int m = l + (r - l) / 2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m + 1, r); 
  
        merge(arr, l, m, r); 
    } 
} 