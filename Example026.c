#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//It computes equation of f(x) = x^3 + 12x^2 + 47x + 5 by taking x from user
	
	float x, fx;
	
	printf("Please enter x: ");
	scanf("%f", &x);
	
	fx = x*x*x + 13*x*x + 47*x + 5;
	
	printf(">> f(%.3f) = %.3f", x, fx);
	
	return 0;
}
