#include <stdio.h>
#include <stdlib.h>

/*
It prints a triangle like this (Right triangle):

*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *
* * * * * * * *
* * * * * * * * *

*/


int main(){
	
	int len,i,j;
	
	printf("Please enter the length of the triangle: ");
	scanf("%d", &len);
	
	for(i=0; i<len; i++){
		for(j=0; j<=i; j++){
			printf("* ");
		}
		printf("\n");
	}	
	return 0;
}
