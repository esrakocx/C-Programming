#include <stdio.h>
#include <stdlib.h>

int power(int i){
	
	if(i == 0)
		return 1;
	else
		return 2 * power(i-1);
}

int main(){
	
	int N, i;
		
	printf("Please enter a number: ");
	scanf("%d", &N);
	
	for(i=0; i<=N; i++){
		printf("2^%d = %d\n", i, power(i));
	}
	
	return 0;
}
