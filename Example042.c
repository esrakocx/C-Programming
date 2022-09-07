#include <stdio.h>
#include <stdlib.h>

int factorial(int *num){
	
	int i;
	int fact = 1;
	
	for(i=1; i<=*num; i++){
		fact *= i;
	}
	
	return fact;
}

int main(){
	
	int number, *n;
	n = &number;
		
	printf("Please enter the number for which you want the factorial: ");
	scanf("%d", n);
	
	int result =  factorial(n);
	
	printf("%d! = %d", number, result);
		
	return 0;
}
