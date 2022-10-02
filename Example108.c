#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

void print(int *source_arr, int n){
	
	int i;
	for(i=0; i<n; i++){
		printf("%d ", *source_arr);
		source_arr++;
	}
}

int main(){
	
	int source_arr[MAX_SIZE], dest_arr[MAX_SIZE], n, i;
	int *source_ptr, *dest_ptr, *end_ptr;
	
	source_ptr = source_arr; // == source_arr[0]
	dest_ptr = dest_arr; // == dest_arr[0]
	
	printf("Please enter the number of values of the array: ");
	scanf("%d", &n);
	
	printf("Please enter the values:\n");
	for(i=0; i<n; i++){
		printf("%d- ", i+1);
		scanf("%d", source_ptr+i);
	}
	
	end_ptr = &source_ptr[n-1];
	
	while(source_ptr <= end_ptr){
		
		*dest_ptr = *source_ptr;
		source_ptr++;
		dest_ptr++;
	}
	
	printf("Source array's values: ");
	print(source_arr,n);
	
	printf("\nDestination array's values: ");
	print(dest_arr,n);
		
	return 0;
}
