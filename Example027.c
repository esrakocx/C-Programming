#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// It finds the sign of the two number's multiplication
	
	int num1, num2;
	
	printf("Number 1: "); scanf("%d", &num1);
	printf("Number 2: "); scanf("%d", &num2);
	
	if(num1 > 0 && num2 > 0 || num1 < 0 && num2 < 0)
		printf(">> sign(%d * %d) = +1", num1, num2);
	else if(num1 > 0 && num2 < 0 || num1 < 0 && num2 > 0)
		printf(">> sign(%d * %d) = -1", num1, num2);
	else
		printf("sign(%d * %d) = 0", num1, num2);
	
	return 0;
}
