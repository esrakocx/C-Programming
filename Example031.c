#include <stdio.h>
#include <stdlib.h>

void change(int *num1, int *num2){
	
	int temporary;
	temporary = *num1;
	*num1 = *num2;
	*num2 = temporary;
	
}

int main(){
	
	int num1 = 10, num2 = 20;
	
	printf("Before calling: %d %d \n", num1, num2);
	change(&num1, &num2);
	printf("After calling: %d %d ", num1, num2);
	
	return 0;
}
