#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
	
	int fact;
	
	if(n == 0)
		fact = 1;
	
	else
		fact = n * factorial(n-1);
		
	return fact;
}

int main(){
	
	int n;
	printf("Please enter a number that you want to find its factorial: ");
	scanf("%d", &n);
	
	printf("%d! = %d", n, factorial(n));
	
	return 0;
}
