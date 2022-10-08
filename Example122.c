#include <stdio.h>
#include <stdlib.h>

int sum(int num){
	
	if(num == 1)
		return 1;
	else
		return num + sum(num-1);
}

int main(){
	
	int num;
	
	printf("Please enter a number: ");
	scanf("%d", &num);
	
	printf("The result: %d", sum(num));
	
	return 0;
}
