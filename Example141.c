#include <stdio.h>
#include <stdlib.h>

int divide(int dividend, int divisor){
	if(divisor == 0)
		return 0;
		
	else if(dividend-divisor == 0)
		return 1;
		
	else if(dividend < divisor)
		return 0;
		
	else
		return (1 + divide(dividend - divisor, divisor));
}

int main(){
	
	int dividend, divisor;
	printf("Dividend: ");
	scanf("%d", &dividend);
	printf("Divisor: ");
	scanf("%d", &divisor);
	
	printf("Quotient: %d\n", divide(dividend, divisor));
	printf("Remainder: %d", dividend - (divide(dividend, divisor) * divisor));
	
	return 0;
}
