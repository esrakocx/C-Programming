#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void print(int nums[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", nums[i]);
	}
}

void generator(int nums[], int n){
	srand(time(NULL));
	int i;
	for(i=0; i<n; i++){
		nums[i] = rand()%100;
	}
}

void insertionSort(int nums[], int n){
	int i, j;
	
	for(i=1; i<n; i++){
		j = i;
		while(j > 0 && nums[j] < nums[j-1]){
			swap(&nums[j-1], &nums[j]);
			j--;
		}
	}
}

int main(){
	
	int n;
	
	printf("How many number will you enter? : ");
	scanf("%d", &n);
	int nums[n];
	
	generator(nums, n);
	
	printf("Unsorted numbers: \n");
	print(nums, n);
	
	insertionSort(nums, n);
	
	printf("\nSorted numbers: \n");
	print(nums, n);
	
	return 0;
}
