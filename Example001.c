#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int number1;
	float number2;
	char letter;
	
	printf("Please enter a number: ");
	scanf("%d", &number1);
	
	printf("Please enter a second number: ");
	scanf("%f", &number2);
	
	printf("Please enter first letter of your name: ");
	scanf(" %c", &letter);
		
	printf("\nYour first number: %d\nYour second number: %.2f\nFirst letter of your name: %c", number1, number2, letter);
	
	return 0;
}
