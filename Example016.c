#include <stdio.h>
#include <stdlib.h>

float addition(float num1, float num2){
	
	return num1 + num2;		
}

float subtraction(float num1, float num2){
	
	return num1 - num2;
}

float multiplication(float num1, float num2){
	
	return num1 * num2;
}

float division(float num1, float num2){
	
	return num1 / num2;
}

int main(){
	
	float num1, num2;
	char chose;
	
	while(1){
		
		printf("Number 1: ");
		scanf("%f", &num1);
		
		printf("Number 2: ");
		scanf("%f", &num2);
		
		printf("\n~Menu~\n\n'+' Addition\n'-' Subtraction\n'x' Multiplication\n'/' Division\n'q' To exit\n");
		printf("\nPlease enter the operation what you want: ");
		scanf("%s", &chose);
		
		if(chose == '+')
			printf("%.2f + %.2f = %.2f\n\n", num1, num2, addition(num1, num2));
			
		else if(chose == '-')
			printf("%.2f - %.2f = %.2f\n\n", num1, num2, subtraction(num1, num2));
		
		else if(chose == 'x')
			printf("%.2f x %.2f = %.2f\n\n", num1, num2, multiplication(num1, num2));
		
		else if(chose == '/')
			printf("%.2f / %.2f = %.2f\n\n", num1, num2, division(num1, num2));
		
		else if(chose == 'q')
			break;
			
		else
			printf("Incorrect input!\n");
	}
		
	return 0;
}
