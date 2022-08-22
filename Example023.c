#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// It compares two numbers
	
	int num1, num2;
	
	printf("Number 1: "); scanf("%d", &num1);
	printf("Number 2: "); scanf("%d", &num2);
	
	if(num1 == num2)
		printf("%d = %d\n", num1, num2);
	else if(num1 > num2)
		printf("%d > %d\n", num1, num2);
	else
		printf("%d < %d\n", num1, num2);
	
	if(num1 % num2 == 0)
		printf("%d is a multiple of %d", num2, num1);
	else
		printf("%d is not a multiple of %d", num2, num1);
		
	return 0;
}
