#include <stdio.h>
#include <stdlib.h>

/*
It prints a triangle like this (Mirrored right triangle):

        *
       **
      ***
     ****
    *****
   ******
  *******
 ******** 
*********     

*/

int main(){
	
	int i,j,len;
	
	printf("Please enter the length of the triangle: ");
	scanf("%d", &len);
	
	for(i=1; i<=len; i++){
		
		for(j=i; j<len; j++){
			printf(" ");
		}
		
		for(j=1; j<=i; j++){
			printf("*");
		}

		printf("\n");
	}
	
	return 0;
}
