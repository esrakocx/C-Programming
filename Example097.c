#include <stdio.h>
#include <stdlib.h>

void swap(int* x, int* y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;	
}

int main(){
	
	int x, y;
	
	printf("Please enter the first number: "); scanf("%d", &x);
	printf("Please enter the second number: "); scanf("%d", &y);
	
	printf("\nBefore the swap:\nFirst: %d\nSecond: %d\n", x, y);
	swap(&x,&y);
	printf("\nAfter the swap:\nFirst: %d\nSecond: %d\n", x, y);
	
	return 0;
}
