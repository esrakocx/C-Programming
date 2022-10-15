#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void print(int nums[], int n){
	int i; 
	for(i=0; i<n; i++){
		printf("%d ", nums[i]);
	}
}

void bubbleSort(int nums[], int n){
	int i, j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(nums[i]>nums[j])
				swap(&nums[i], &nums[j]);
		}
	}
}

int main(){
	
	int n, i;
	
	printf("How many numbers will you enter? : ");
	scanf("%d", &n);
	int nums[n];
	
	srand(time(NULL));
	for(i=0; i<n; i++){
		nums[i] = rand()%100;
	}
	
	printf("Unsorted numbers: \n");
	print(nums, n);
	
	bubbleSort(nums, n);
	
	printf("\nSorted numbers: \n");
	print(nums, n);
	
	return 0;
}
