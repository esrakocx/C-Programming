#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Sum of numbers up to n
	
	int total, number, i;
	total = 0, i = 1;
	printf("Please enter a number: ");
	scanf("%d", &number);
	
	while(i <= number){
		
		if(i == number)
			printf("%d", i);
		else
			printf("%d + ", i);
			
		total += i;
		i++;
	}
	
	printf(" = %d",total);
	
	return 0;
}
