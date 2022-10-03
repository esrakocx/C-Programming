#include <stdio.h>
#include <stdlib.h>
#define max 15

void copy(char *arr){
	char *ptr1, *ptr2;
	char copy_arr[max];
	
	ptr2 = copy_arr;
	
	for(ptr1=arr; ptr1<arr+max; ptr1++){
		*ptr2 = *ptr1;
		ptr2++;
	}
}

int main(){
	
	char arr[max] = {'k','l','b','d','i','s','t','e','f','o','r','c','h','x'};
	char copy_arr[max];
	int i;
	
	printf("Original array: ");
	for(i=0; i<max; i++){
		printf("%c", *(arr+i));
	}
	
	copy(arr);
	
	printf("\nCopied array: ");
	for(i=0; i<max; i++){
		printf("%c", *(arr+i));
	}
	
	return 0;
}

