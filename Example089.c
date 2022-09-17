#include <stdio.h>
#include <stdlib.h>

//Fibonacci

void fibonacci(int n, int fibs[n]){
	
	int i;
	fibs[0] = 0;
	fibs[1] = 1;
	
	printf("%d %d ", fibs[0], fibs[1]);
	
	for(i=2; i<n; i++){
		fibs[i] = fibs[i-1] + fibs[i-2];
		printf("%d ", fibs[i]);
	}	
}

int main(){
	
	int n, i;
	
	printf("How many Fibonacci numbers do you want to create?: ");
	scanf("%d", &n);
	int fibs[n];
	
	fibonacci(n, fibs);
		
	return 0;
}
