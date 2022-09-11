#include <stdio.h>
#include <stdlib.h>

void swapping(int num1, int num2){
	
	int temp;
		
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("Your numbers after swapping: First: %d Second: %d", num1, num2);
}

int main(){
	
	int num1, num2;	
	
	printf("Please enter the 1st number: ");
	scanf("%d", &num1);
	
	printf("Please enter the 2nd number: ");
	scanf("%d", &num2);
	
	printf("Your numbers before swapping: First: %d Second: %d\n", num1, num2);
	
	swapping(num1, num2);
		
	return 0;
}
