#include <stdio.h>
#include <stdlib.h>

void enter_values(int matrix[3][2]){
	int i,j;
	printf("%d x %d boyutunda bir matris giriniz: \n", 3, 2);
	
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
}

void print_values(int matrix[3][2]){
	int i,j;
	
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			printf("%3d ", matrix[i][j]);
		}
		printf("\n");
	}
}

void calcul(int matrix[3][2], int *max, int *min, int *total){
	
	int i, j;
	*total = 0;
	
	*max = *min = matrix[0][0];
	
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			if(matrix[i][j] > *max)
				*max = matrix[i][j];
			if(matrix[i][j] < *min)
				*min = matrix[i][j];
				
			*total += matrix[i][j];
		}
	}
}

int main(){
	
	int matrix[3][2], max, min, total;
	
	enter_values(matrix);
	print_values(matrix);
	calcul(matrix, &max, &min, &total);
	
	printf("Max values of matrix: %d\n", max);
	printf("Min values of matrix: %d\n", min);
	printf("Total of matrix: %d\n", total);
	
	return 0;
}
