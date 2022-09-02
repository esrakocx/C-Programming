#include <stdio.h>
#include <stdlib.h>

void swap(int *num1, int *num2){
	
	int temp;
	
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	
}

int main(){
	
	int num1, num2;
		
	printf("Please enter 1st number: "); scanf("%d", &num1);
	printf("Please enter 2nd number: "); scanf("%d", &num2);
	
	printf("Before swapping the 1st number: %d and the 2nd number: %d\n", num1, num2);
	
	swap(&num1, &num2);
		
	printf("After swapping the 1st number: %d and the 2nd number: %d", num1, num2);
		
	return 0;
}
