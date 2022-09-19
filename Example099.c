#include <stdio.h>
#include <stdlib.h>

float avrg(int n, int arr[]){
	
	int i, total=0;
	
	for(i=0; i<n; i++)
		total += arr[i];
	
	return (float)total/n;
}

int main(){
	
	int n, i;
	
	printf("Please enter the size of the array: ");
	scanf("%d", &n);
	int arr[n];
		
	for(i=0; i<n; i++){
		printf("%d. number : ", i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("Average of your array: %.2f",avrg(n,arr));
	
	return 0;
}
