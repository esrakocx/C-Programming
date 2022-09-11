#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float pNum, sqrRoot;
	
	do{
		printf("Please enter a number: ");
		scanf("%f", &pNum);
	
		if(pNum > 0){
			sqrRoot = sqrt(pNum);
			printf("Square root of the number: %.2f\n", sqrRoot);
		}
		else if(pNum < 0)
			printf("Please enter a positive number!\n");
		
	}while(pNum);  // if the number is 0, the program is terminated
	
	return 0;
}
