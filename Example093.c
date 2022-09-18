#include <stdio.h>
#include <stdlib.h>

/*
Please enter row number: 4
   e
  eee
 eeeee
eeeeeee
 +++++
  +++
   +

*/

void print_e(int row){
	int i, j;
	int space = row-1;
	
	for(i=1; i<=row; i++){
		
		for(j=1; j<=space; j++)
			printf(" ");
		
		space--;
		
		for(j=1; j<=2*i-1; j++)
			printf("e");
		
		printf("\n");
	}
}

void print_plus(int row){
	int i, j;
	int space = 1;
	
	for(i=1; i<=row-1; i++){
		
		for(j=1; j<=space; j++)
			printf(" ");
		
		space++;
		
		for(j=1; j<=2*(row-i)-1; j++)
			printf("+");
		
		printf("\n");
	}
}

int main(){
	
	int row;
	
	printf("Please enter the row number: ");
	scanf("%d", &row);
	
	print_e(row);
	print_plus(row);
	return 0;
}
