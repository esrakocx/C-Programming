#include <stdio.h>
#include <stdlib.h>
#define max 20

void get_values(int *arr1, int *arr2, int a, int b){
	int *ptr1, *ptr2;

	printf("Please enter the first array's values: \n");
	for(ptr1=arr1; ptr1<arr1+a; ptr1++){
		printf("Value %d : ", ptr1-arr1 + 1);
		scanf("%d", ptr1);
	}
	printf("Please enter the second array's values: \n");
	for(ptr2=arr2; ptr2<arr2+b; ptr2++){
		printf("Value %d : ", ptr2-arr2 + 1);
		scanf("%d", ptr2);
	}
}

void print(int *arr1, int *arr2, int a, int b){
	int *ptr1, *ptr2;
	
	printf("First array's values: ");
	for(ptr1=arr1; ptr1<arr1+a; ptr1++){
		printf("%d ", *ptr1);
	}
	
	printf("\nSecond array's values: ");
	for(ptr2=arr2; ptr2<arr2+b; ptr2++){
		printf("%d ", *ptr2);
	}
}

void combine(int *arr1, int *arr2, int a, int b){
	int *ptr1, *ptr2;
	for(ptr1=arr1+a, ptr2=arr2; ptr2<arr2+b; ptr1++, ptr2++){
		*ptr1 = *ptr2;
	}
}

int main(){
	
	int arr1[max], arr2[max];
	int a, b, i;
	
	printf("Please enter the size of array 1: ");
	scanf("%d", &a);
	
	printf("Please enter the size of array 2: ");
	scanf("%d", &b);
	
	get_values(arr1, arr2, a, b);
	print(arr1, arr2, a, b);
	
	printf("\nThe combined status of the arrays: ");
	combine(arr1,arr2,a,b);
	for(i=0; i<a+b; i++){
		printf("%d ", *(arr1+i));
	}
	return 0;
}
