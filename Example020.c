#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// It computes the result of the equation ax^2 + bx + c by taking a, b, and c from user
	
	float a, b, c, x, result;
	
	printf("a: "); scanf("%f", &a);
	printf("b: "); scanf("%f", &b);
	printf("c: "); scanf("%f", &c);
	printf("x: "); scanf("%f", &x);
	
	result = a*x*x + b*x + c;
	
	printf("ax^2 + bx + c = %.2f", result);	
	
	return 0;
}
