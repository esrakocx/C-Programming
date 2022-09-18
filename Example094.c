#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort(int nums[], int n){
	
	int i, j, temp=0;
	
	for(i=0; i<n; i++){
		for(j=0; j<n-1; j++){
			if(nums[j]>nums[j+1]){
				temp = nums[j];
				nums[j]= nums[j+1];
				nums[j+1] = temp;
			}
		}
	}
}

int main(){
	
	int n, i;
	
	printf("How many numbers will be generated?: ");
	scanf("%d", &n);
	int nums[n];
	
	srand(time(NULL));
	
	printf("Values in the array:\n");
	for(i=0; i<n; i++){
		nums[i] = rand()%100;
		printf("%d\n", nums[i]);
	}
	
	printf("The sorted state of the numbers: \n");
	sort(nums, n);
	
	for(i=0; i<n; i++){
		printf("%d ", nums[i]);
	}
		
	return 0;
}
