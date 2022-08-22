#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//It finds ones-digits, tens-digits and hundreds  of a number
	int number, ones, tens, hundreds;
	
	printf("Please enter three-digit number: ");
	scanf("%d", &number);
	
	ones = number % 10;
	tens = number % 100 / 10;
	hundreds = number / 100;
	
	printf("Ones-digits: %d\n", ones);
	printf("Tens-digits: %d\n", tens);
	printf("Hundreds: %d", hundreds);
	
	return 0;
}
