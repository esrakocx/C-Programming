#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num1 , num2;
	
	printf("Please enter the 1st number: ");
	scanf("%d", &num1);
	
	printf("Please enter the 2nd number: ");
	scanf("%d", &num2);
	
	if(num1 == 0 || num2 == 0){
		printf("The product of the numbers is zero!\n");
		printf("%d x %d = 0", num1, num2);
	}
		
	else if((num1>0 && num2>0) || (num1<0 && num2<0)){
		printf("The product of the numbers is positive!\n");
		printf("%d x %d = %d", num1, num2, num1*num2);
	}
	
	else{
		printf("The product of the numbers is negative!\n");
		printf("%d x %d = %d", num1, num2, num1*num2);
	}
	return 0;
}
