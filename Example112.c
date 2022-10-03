#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int size_arr(char *arr){
	
	char *ptr;	
	for(ptr=arr; *ptr; ptr++);
	
	return ptr-arr;
}

int main(){
	
	char arr[MAX];
	printf("Please enter a char array: ");
	gets(arr);
	
	printf("%s has %d characters", arr, size_arr(arr));
	
	return 0;
}
