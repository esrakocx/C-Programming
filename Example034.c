#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float num1, num2, total;
	float *p1, *p2;
	
	p1 = &num1;
	p2 = &num2;
	
	printf("First number: ", num1); scanf("%f", p1);
	printf("Second number: ", num2); scanf("%f", p2);
	
	total = *p1 + *p2;
	
	printf("%.2f + %.2f = %.2f", *p1, *p2, total);	
	
	return 0;
} 
