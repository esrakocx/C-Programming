#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i,j;
	int mat1[3][4] = {{1,2,5,7},{4,8,2,3},{9,4,2,3}};
	int mat2[3][4] = {{4,3,1,7},{3,5,1,2},{5,8,1,6}};
	int total[3][4];
	
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			total[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
		
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			
			printf("%4d",total[i][j]);
		}
		printf("\n");
	}
	
return 0;
}
