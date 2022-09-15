#include <stdio.h>
#include <stdlib.h>

int multiple_of_two(int *num){
	if(*num%2 == 0)
		return 1;
	else
		return 0;
}

int multiple_of_three(int *num){
	if(*num%3 == 0)
		return 1;
	else
		return 0;
}

int main(){
	
	int num;
	
	printf("Please enter a number: ");
	scanf("%d", &num);
	
	if(multiple_of_two(&num)==1)
		printf("%d is even!\n", num);
	else
		printf("%d is odd!\n", num);
	
	if(multiple_of_three(&num)==1)
		printf("%d is a multiple of three!\n", num);
	
	if(multiple_of_two(&num) == 1 && multiple_of_three(&num) == 1)
		printf("%d is a multiple of six!", num);
			
	return 0;
}
