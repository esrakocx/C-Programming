#include <stdio.h>
#include <stdlib.h>

double find_sqrt(int num){
	
	double sqr;
	int i;
	
	if(num>0.0){
		
		sqr = num/2;
		for(i=0; i<50; i++){
			sqr = ((sqr*sqr)+num)/(2*sqr);
		}
		return sqr;
	}
	
	else if(num == 0.0)
		return 0;
		
	else
		printf("Please enter a positive number!");
}

int main(){
	
	double num;
	
	printf("Enter the number to find the square root of: ");
	scanf("%lf", &num);
	
	printf("%.2lf square root = %.2lf", num, find_sqrt(num));
	
	return 0;
}
