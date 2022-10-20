#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
	
	if(n==0)
		return 0;
		
	else if(n==1)
		return 1;
		
	else{
		return fibonacci(n-2) + fibonacci(n-1);
	}
	
}

int main(){
	
	int n, i;
	printf("How many numbers will you enter? : ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("%d ", fibonacci(i));
	}	
	
	return 0;
}
