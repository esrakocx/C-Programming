#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void selectionSort(int nums[], int n){
	
	int i, j, loc;
	
	for(i=0; i<n-1; i++){
		loc = i;
		for(j=i+1; j<n; j++){
			if(nums[j] < nums[loc]){
				loc = j;
			}
		}
		if(loc != i)
			swap(&nums[i], &nums[loc]);
	}
}

int main(){
	
	int i, j, temp, n, loc;
	
	printf("How many number will you enter? : ");
	scanf("%d", &n);
	int nums[n];
	
	printf("Please enter the numbers: \n");
	for(i=0; i<n; i++){
		scanf("%d", &nums[i]);
	}
	
	printf("Unsorted numbers: \n");
	for(i=0; i<n; i++){
		printf("%d ", nums[i]);
	}
	
	selectionSort(nums, n);
	
	printf("\nSorted numbers: \n");
	for(i=0; i<n; i++){
		printf("%d ", nums[i]);
	}
	
	return 0;
}
