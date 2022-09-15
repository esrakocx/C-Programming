#include <stdio.h>
#include <stdlib.h>

void four_operation(float num1, float num2, char opr, float *result){
	
	switch(opr){
	case '+':
		*result = num1 + num2;
		break;
	
	case '-':
		*result = num1 - num2;
		break;
	
	case 'x':
		*result = num1 * num2;
		break;
	
	case '/':
		*result = num1 / num2;
		break;
	
	default:
		printf("Incorrect input!\n");
		break;
	}
}

int main(){
	
	char opr;
	float num1, num2, result;
	
	printf("Please enter the operation you want to calculate (+,-,x,/): ");
	scanf("%c", &opr);
	
	printf("First number: "); scanf("%f", &num1);
	printf("Second number: "); scanf("%f", &num2);
		
	four_operation(num1, num2, opr, &result);
	printf("Result: %.2f", result);
	
	return 0;
}
