#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delete_value(int nums[], int row_n, int n){
	
	int i;
	if(row_n >= n+1)
		printf("Please enter a valid row number!");
		
	else{
		
		for(i=row_n-1; i<n-1; i++)
			nums[i] = nums[i+1];
			
		printf("After the value is deleted: \n");
		
		for(i=0; i<n-1; i++)
			printf("%d- %d\n", i+1, nums[i]);
	}
}

int main(){
	
	int n, i, row_n;
	
	printf("How many numbers will be generated?: ");
	scanf("%d", &n);
	
	int nums[n];
	
	srand(time(NULL));
	
	printf("Elements of the array: \n");
	for(i=0; i<n; i++){
		nums[i] = rand()%100;
		printf("%d- %d\n", i+1, nums[i]);
	}	
	
	printf("Enter the row number of the value to be deleted: ");
	scanf("%d", &row_n);
	delete_value(nums, row_n, n);
	
	return 0;
}
