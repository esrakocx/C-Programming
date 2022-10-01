#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//It computes the 1^2 + 2^2 + 3^2 + ... + n^2

int compute(int n){
	
	int result = 0, i;
	
	for(i=1; i<=n; i++){
		result += pow(i,2);
	}	
	return result;
}

int main(){
	
	int n;
	
	printf("Please enter a value: ");
	scanf("%d", &n);
	
	printf("Sum of the series: %d", compute(n));
	
	return 0;
}
