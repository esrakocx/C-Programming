#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// A program that finds the numbers you enter as odd or even.
	
	int number;
	
	printf("Please enter a number: ");
	scanf("%d", &number);
	
	if (number % 2 == 0)
		printf("%d is even!", number);
	else
		printf("%d is odd!", number);
		
	return 0;
}
