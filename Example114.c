#include <stdio.h>
#include <stdlib.h>

void is_even(int *arr){
	
	int *ptr;
	
	for(ptr=arr; ptr<arr+15; ptr+=2){
		printf("%d ", *ptr);
	}
}

void is_odd(int *arr){
	
	int *ptr;
	
	for(ptr=arr+1; ptr<arr+15; ptr+=2){
		printf("%d ", *ptr);
	}
}

int main(){
	
	int arr[15] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	int i;
	
	printf("The initial state of the array: ");
	for(i=0; i<15; i++){
		printf("%d ", arr[i]);
	}
	
	printf("\nEven numbers: ");
	is_even(arr);
	printf("\nOdd numbers: ");
	is_odd(arr);
	
	return 0;
}
