#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int array[2][3][2];
	int i,j,k;
	
	printf("Please enter 12 value:\n");
	
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			for(k=0; k<2; k++){
				scanf("%d",&array[i][j][k]);
			}
		}
	}
	
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			for(k=0; k<2; k++){
				printf("array[%d][%d][%d] = %4d\n", i+1, j+1, k+1, array[i][j][k]);
			}
		}
	}
	
		
	return 0;
}
