#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// It finds the largest and smallest ones among three numbers
	
	int num1, num2, num3, max, min;
	
	printf("Number 1: "); scanf("%d",&num1);
	printf("Number 2: "); scanf("%d",&num2);
	printf("Number 3: "); scanf("%d",&num3);
	
	max = num1;
	
	if(num2 > max)
		max = num2;
		
	if(num3 > max)
		max = num3;
		
	printf("The largest number: %d\n", max);		
	
	min = num1;
	
	if(num2 < min)
		min = num2;
	if(num3 < min)
		min = num3;
		
	printf("The smallest number: %d", min);
		
	return 0;
}
