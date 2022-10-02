#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100	

int search(int *arr, int size, int number){
	
	int index = 0;
	int *arrEnd;
	
	arrEnd = (arr + size -1);
	
	while(arr <= arrEnd){
		arr++;
		index++;
		
		if(*arr == number)
			return index;
	}
		
	return -1;
}

void get(int *arr, int size){
	
	int *end_ptr; 
	end_ptr = (arr + size - 1); // It represent the last value's address
	
	while(arr <= end_ptr)
		scanf("%d", ++arr);
	
}

int main(){
	
	int arr[MAX_SIZE];
	int size, number;
		 
	printf("Please enter the size of the array: ");
	scanf("%d", &size);
	
	printf("Please enter values: \n");
	get(arr, size);
	
	printf("Please enter the number that you want to search: ");
	scanf("%d", &number);
		
	if(search(arr, size, number) == -1)
		printf("%d is not in the array!", number);
	else
		printf("%d is in index %d!", number, search(arr, size, number));
	
	return 0;
}
