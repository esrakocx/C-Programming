#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int arr[10];
	int i, max, min;
	
	printf("Please enter ten values for the array: ");
	
	for(i=0;i<10;i++){
		scanf("%d", &arr[i]);
	}
	
	max = min = arr[0];
	
	for(i=0;i<10;i++){
		if(arr[i]>max)
			max = arr[i];
			
		if(arr[i]<min)
			min = arr[i];
	}
	
	printf("%d is the max one!\n", max);
	printf("%d is the min one!", min);
	
	return 0;
}
