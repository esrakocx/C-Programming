#include <stdio.h>
#include <stdlib.h>

int main(){
	
		
	/*
	with do while loop
	
	Enter a number: 100
		100
		200
		300
		400
		500
		600
		700
		800
		900
		1000
	*/
	int number;
	
	printf("Please enter a number: ");
	scanf("%d", &number);
	
	int i = 1;
	do{
		printf("%d\n",number * i);
		i++;
	}while(i<=10);
	
	return 0;
}
