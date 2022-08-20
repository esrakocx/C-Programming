#include <stdio.h>
#include <stdlib.h>

//It computes the power of a number etc. 2 ^ 2 = 4 

void compute_power(int *result, int *x, int *y){
	
	*result = 1;
	int i;
	for(i=0; i<*y; i++)
		*result *= *x;
}

int main(){
	
	int x, y, result;
	
	printf("Enter the base of the number: ");
	scanf("%d", &x);
	printf("Enter the power of the number: ");
	scanf("%d", &y);
	
	compute_power(&result, &x, &y);
	
	printf("Result: %d", result);
		
	return 0;
}
