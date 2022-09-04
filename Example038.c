#include <stdio.h>
#include <stdlib.h>

/*
It prints a triangle like this (Inverted Right Triangle):

* * * * * * * * 
* * * * * * *
* * * * * *
* * * * *
* * * * 
* * * 
* *
*

*/

int main(){
	
	int len,i,j;
	
	printf("Please enter the length of the triangle: ");
	scanf("%d", &len);
		
	for(i=len; i>0; i--){
		for(j=i; j>0; j--){
			printf("* ");
		}
		printf("\n");
	}	
		
	return 0;
}
