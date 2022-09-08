#include <stdio.h>
#include <stdlib.h>

/*
It prints a triangle like this (Pyramid star triangle):

 * * * * * * * * *
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

	int i,j,len;
	
	printf("Please enter the length of the triangle: ");
	scanf("%d", &len);
	
	for(i=len; i>0; i--){
		
		for(j=len; j>i; j--){
			printf(" ");
		}
		
		for(j=i; j>0; j--){
			printf("* ");
		}
		
		printf("\n");
	}
	
	return 0;
}
