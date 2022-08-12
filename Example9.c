#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float number1, number2;
	char operation;
	
	while(1){
		
		printf("Please enter first number: ");
		scanf("%f", &number1);
		
		printf("Please enter second number: ");
		scanf("%f", &number2);
		
		printf("Please choose the operation ('+', '-', '/', 'x') you want: ");
		scanf(" %c", &operation);
		
		switch(operation){
			
			case '+':
				printf("%.2f + %.2f = %.2f\n",number1, number2, number1+number2);
				break;
			
			case '-':
				printf("%.2f - %.2f = %.2f\n",number1, number2, number1-number2);
				break;
			
			case '/':
				printf("%.2f / %.2f = %.2f\n",number1, number2, number1/number2);
				break;
			
			case '*':
				printf("%.2f x %.2f = %.2f\n",number1, number2, number1*number2);
				break;
			
			default:
				printf("Invalid input!\n");
				break;
		}
	}
		
	
	return 0;
}
