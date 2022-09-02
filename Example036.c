#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int number, *ptr, arr[number], i;
	
	ptr = arr;
	
	printf("How many elements do you want to create an array?: ");
	scanf("%d", &number);
	
	printf("Please enter the elements: \n");
		
	for(i=0; i<number; i++){
		
		scanf("%d", ptr);  //&arr[i]
		ptr++;
	}
	
	ptr = arr;
	
	printf("\nElements: \n");
	
	for(i=0; i<number; i++){
		
		printf("%d\n", *ptr);
		ptr++;
	}
	
	return 0;
}
