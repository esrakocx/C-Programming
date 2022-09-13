#include <stdio.h>
#include <stdlib.h>

int cal_fact(int n){
	
	int i, fact=1;
	
	for(i=1; i<=n; i++){
		fact *= i;
	}
	
	return fact;
}

int main(){
	
	int i;
	
	for(i=0; i<=10; i++){
		printf("%d! = %d\n", i, cal_fact(i));
	}
	
	return 0;
}
