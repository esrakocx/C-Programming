#include <stdio.h>
#include <stdlib.h>

int power(int base, int exponent){
	
	if(exponent == 0)
		return 1;
	else
		return base * power(base, exponent-1);
}

int main(){
	
	int base, exponent;
	
	printf("Please enter the base: ");
	scanf("%d", &base);
	
	printf("Please enter the exponent: ");
	scanf("%d", &exponent);
	
	printf("%d^%d = %d", base, exponent, power(base, exponent));
	
	return 0;
}
