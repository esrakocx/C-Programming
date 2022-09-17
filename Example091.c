#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int find_max(int nums[], int n){
	
	int i, max;
	max = nums[0];
	
	for(i=1; i<n; i++){
		if(nums[i] > max)
			max = nums[i];
	}
	return max;
}

int find_min(int nums[], int n){
	
	int i, min;
	min = nums[0];
	
	for(i=1; i<n; i++){
		if(nums[i] < min)
			min = nums[i];
	}
	return min;
}

int main(){
	
	int n, i;
	
	printf("How many numbers will be generated?: ");
	scanf("%d", &n);
	int nums[n];
	
	srand(time(NULL));
	
	printf("Elements of the array: \n");
	for(i=0; i<n; i++){
		nums[i] = rand()%100;
		printf("%d\n", nums[i]);
	}
	
	printf("\nThe max one in the array: %d\n", find_max(nums, n));
	printf("The min one in the array: %d", find_min(nums, n));
	
	return 0;
}
