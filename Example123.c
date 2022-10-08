#include <stdio.h>
#include <stdlib.h>

int multiply(int num1, int num2){
	
	int result;
	if(num2 == 1)
		result = num1;
	else
	{
		return num1 + multiply(num1, num2-1);
	}
	
	return result;
}

int main(){
	
	int num1, num2;
	
	printf("Please enter first number: ");
	scanf("%d", &num1);
	printf("Please enter second number: ");
	scanf("%d", &num2);
	
	printf("%d x %d = %d", num1, num2, multiply(num1,num2));
	
	return 0;
}
