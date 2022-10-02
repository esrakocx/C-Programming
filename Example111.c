#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

void invert(int *arr, int n){
	
	int *first_arr, *end_arr;
	int temp;
	
	for(first_arr = arr, end_arr = arr+n-1; first_arr<end_arr; first_arr++, end_arr--){
		temp = *first_arr;
		*first_arr = *end_arr;
		*end_arr = temp; 
	}
}

void get_values(int *arr, int n){
	
	int *end_arr;
	end_arr = arr + n - 1;
	
	while(arr <= end_arr){
		scanf("%d", arr);
		arr++;
	}
}

void print_pre(int *arr, int n){
	
	int *ptr;
	for(ptr=arr; ptr<arr+n; ptr++)
		printf("%d ", *ptr);
}

int main(){
	
	int arr[MAX_SIZE];
	int n;
	
	printf("Please enter the size of the array: ");
	scanf("%d", &n);
	
	printf("Please enter the values of the array: \n");
	get_values(arr, n);
	
	printf("Not inverted array: ");
	print_pre(arr, n);
	
	printf("\nInverted array: ");
	invert(arr,n);
	print_pre(arr, n);
	
	return 0;
}
