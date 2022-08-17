#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int matrix[10][10];
	int i, j;
	
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			if(i == j)
				matrix[i][j] = 1;
			else
				matrix[i][j] = 0;
		}
	}
	
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}
		
	return 0;
}
