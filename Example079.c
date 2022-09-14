#include <stdio.h>
#include <stdlib.h>

int find_largest(int num1, int num2){
	
	if(num1>num2)
		return 0;
	else if(num1<num2)
		return 1;
	else
		return 2;
}

int main(){
	
	int num1, num2;
	
	printf("Please enter 1st number: "); scanf("%d", &num1); 
	printf("Please enter 2nd number: "); scanf("%d", &num2);
		
	if(find_largest(num1, num2) == 0)
		printf("%d > %d", num1, num2);
	else if(find_largest(num1, num2) == 1)
		printf("%d < %d", num1, num2);
	else
		printf("%d = %d", num1, num2);
	
	return 0;
}
