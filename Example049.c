#include <stdio.h>
#include <stdlib.h>

struct complex_number{
		float a, b;
};

int main(){
	
	struct complex_number num1, num2, result;
	char opr;
	
	printf("Please enter the operation you want to do: ");
	scanf("%c", &opr);
	
	printf("The real part of the 1st complex number: ");
	scanf("%f", &num1.a);
	
	printf("The imaginary part of the 1st complex number: ");
	scanf("%f", &num1.b);
	
	printf("The real part of the 2nd complex number: ");
	scanf("%f", &num2.a);
	
	printf("The imaginary part of the 2nd complex number: ");
	scanf("%f", &num2.b);
	
	
	switch (opr){
		case '+' : 
			result.a = num1.a + num2.a;
			result.b = num1.b + num2.b;
			printf("Result = %.f + %.fi", result.a, result.b);
			break;
			
		case '-' : 
			result.a = num1.a - num2.a;
			result.b = num1.b - num2.b;
			printf("Result = %.f - %.fi", result.a, result.b);
			break;
	
		default:
			printf("Incorrect input!");
			break;	
	}
		
	return 0;
}
