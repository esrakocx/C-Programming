#include <stdio.h>
#include <stdlib.h>

void divide(int dividend, int divisor){
	int quotient, remainder;
	quotient = dividend/divisor;
	remainder = dividend%divisor;
	
	printf("Quotient: %d\n", quotient);
	printf("Remainder: %d\n", remainder);
	printf("%d * %d + %d = %d", quotient, divisor, remainder, dividend);
}

int main(){
	
	int x, y;
	
	printf("Please enter the dividend: "); scanf("%d", &x);
	printf("Please enter the divisor: "); scanf("%d", &y);
	
	divide(x, y);
	return 0;
}
