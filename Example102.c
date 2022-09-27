#include <stdio.h>
#include <stdlib.h>

/*
It prints a shape like this: 

   *********
    *******
     *****
      ***
       *
       *
      ***
     *****
    *******
   *********

*/

void up(int n, char ch){
	int i,j;
	
	for(i=n/2; i>0 ;i--){
		for(j=1; j<=(n/2)-i; j++){
			printf(" ");
		}
		
		for(j=1; j<=(2*i)-1; j++){
			printf("%c", ch);
		}
		printf("\n");
	}
}

void down(int n, char ch){
	int i,j;
	
	for(i=1; i<=n/2; i++){
		for(j=i; j<n/2; j++){
			printf(" ");
		}
	
		for(j=1; j<=(2*i)-1; j++){
			printf("%c", ch);
		}
		printf("\n");	
	}	
}

int main(){
	
	int n;
	char ch;
	
	printf("Please enter your char: ");
	scanf("%c", &ch);
	printf("Please enter the shape's length: ");
	scanf("%d", &n);
	
	up(n,ch);
	down(n,ch);
	
	return 0;
}
