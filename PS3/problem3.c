//C Code to get the 5th root of a Number
#include <stdio.h> 
double custom_abs(double num){
	 return num < 0 ? -num : num;
	
}
double get_fifth_root(int num){
	if(num == 0){
		return num;
	}else{
		double x = (num * 1.0) / 5; //32
		double epsilion = 0.0000001; //pecision 
		double x_new = (4 * x + num / (x * x * x * x)) / 5; 
		while(custom_abs(x - x_new) >= 0.0000001) { 
			x = x_new; 
			x_new = (4 * x + num / (x * x * x * x)) / 5;
		} 
		return x_new; 
	}

}
//32
//
int main(){
	
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	
	double res = get_fifth_root(x);
	printf("root(%d) = %lf\n", x, res);
	
	
	return 0;
}