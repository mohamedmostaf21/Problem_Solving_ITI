//Function To Swap Two NB and explain what happens exactly in memory.
#include <stdio.h>
void swap(int* x, int* y);

int main(){
	int n1, n2;
	printf("Enter a two numbers: ");
	scanf("%d %d", &n1, &n2);
	printf("Before swapping n1 = %d, n2 = %d\n", n1, n2);
	swap(&n1, &n2);
	printf("After swapping n1 = %d, n2 = %d\n", n1, n2);
	
	return 0;
}


void swap(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;	
}


/********************************************


 temp = *x;                               *x = *y                                    *y = temp 
 ***********************				  ***********************			    ***********************	 
 *         10          * n1				  *         20          * n1	        *         20          * n1
 ***********************                  ***********************               ***********************    
 ***********************				  ***********************               ***********************   
 *         20          * n2            	  *         20          * n2            *         10          * n2
 ***********************				  ***********************               ***********************
 ***********************                  ***********************               ***********************
 *        *x=10        * temp	==>       *        *x=10        * temp   ==>    *        *x=10        * temp   ==> 
 ***********************                  ***********************               *********************** 
 ***********************                  ***********************               *********************** 
 *        &n1          * x                *        &n1          * x             *        &n1          * x
 ***********************				  ***********************               ***********************
 ***********************                  ***********************               ***********************
 *        &n2          * y                *        &n2          * y             *        &n2          * y
 ***********************                  ***********************               ***********************
 
 

********************************************/
