//Tree methods to different Functions from one function
//Three functions
#include <stdio.h>
typedef void (*Data)();
void name();
void age();
void faculty();
void callThreeFunctions(Data *funcs, int size);

int main(){
	Data functions[] = {name, age, faculty};

	callThreeFunctions(functions, 3);
	
	return 0;
}
void name(){
	printf("Name: Mohamed Mostsfa Shaban Mohamed\n");
}

void age(){
	printf("Age: 23\n");
}

void faculty(){
	printf("Faculty: Ain Shams University\n");
}
void callThreeFunctions(Data *funcs, int size){
	
	for(int i = 0; i < size; i++){
		funcs[i]();
	}
}