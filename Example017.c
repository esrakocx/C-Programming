#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//It computes the power of a number etc. 2 ^ 2 = 4 

int compute_power(int x, int y){
	return pow(x, y);
}

int main(){
	
	int x, y;
	
	printf("Enter the base of the number: ");
	scanf("%d", &x);
	printf("Enter the power of the number: ");
	scanf("%d", &y);
	
	printf("Result: %d", compute_power(x, y));
		
	return 0;
}
