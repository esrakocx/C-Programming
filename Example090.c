#include <stdio.h>
#include <stdlib.h>

//Floyd's Triangle

/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

void print_floyd(int rows){
	
	int i, j, a=1;
	
	for(i=1; i<=rows; i++){
		for(j=1; j<=i; j++){
			printf("%d ", a);
			a++;
		}
		printf("\n");
	}
}

int main(){
	
	int rows;
	
	printf("Please enter the number of rows of Floyd's triangle to print: ");
	scanf("%d", &rows);
	
	print_floyd(rows);
		
	return 0;
}
