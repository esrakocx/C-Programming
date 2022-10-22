#include <stdio.h>
#include <stdlib.h>
#define N 5

int IsSymmetric(int matrix[N][N], int transpose[N][N]){
	
	int i, j, count = 0;
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			transpose[j][i] = matrix[i][j];
		}
	}
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			if(matrix[i][j] != transpose[i][j])
				count++;
				break; 
		}
	}
	if(count == 0)
		return 1;
	else
		return 0;
}

int IsDiagonal(int matrix[N][N]){
	int i, j;
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			if(i == j)
				break;
			if(matrix[i][j] == 0)
				return 1;
		}
	}
	return 0;
}

void print(int matrix[N][N]){
	int i, j;
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			printf("%3d ", matrix[i][j]);
		}
		printf("\n");
	}
}

int main(){
	
	int i, j, matrix[N][N], transpose[N][N];
	printf("Please determine 5x5 matrix: \n\n");
	printf("Values: \n");
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			printf("%dx%d : ", i+1, j+1);
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("Normal matrix: \n");
	print(matrix);
	
	if(IsSymmetric(matrix, transpose) == 1)
		printf("\nThe matrix is symmetric.\n\n");
	else
		printf("\nThe matrix is not symmetric.\n\n");
		
	printf("Transpose of the matrix: \n");
	print(transpose);
	
	if(IsDiagonal(matrix) == 1)
		printf("\nThe matrix is diagonal.");
	else
		printf("\nThe matrix is not diagonal.");
		
	return 0;
}
