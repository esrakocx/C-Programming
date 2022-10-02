#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void get_numbers(int *arr){
	
	int i;
	for(i=0; i<MAX; i++){
		scanf("%d", arr);
		arr++;
	}
}

int find_max(int *arr){
	
	int *end_ptr, max;
	end_ptr = arr + MAX - 1;
	max = *arr;
	
	while(arr <= end_ptr){
		if(max < *arr)
			max = *arr;
		arr++;
	}
	return max;
}

int find_min(int *arr){
	
	int *end_ptr, min;
	end_ptr = arr + MAX - 1;
	min = *arr;
	
	while(arr <= end_ptr){
		if(min > *arr)
			min = *arr;
		arr++;
	}
	return min;
}

int main(){
	
	int arr[MAX];
	printf("Please enter %d numbers for the array: \n", MAX);
	get_numbers(arr);
	
	printf("The max number in your array = %d\n", find_max(arr));
	printf("The min number in your array = %d", find_min(arr));
	
	return 0;
}
