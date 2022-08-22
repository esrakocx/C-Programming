#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Countdown
	
	int x;
	
	printf("Please enter a number you want to start: ");
	scanf("%d", &x);
	
	while(x!=0){
		printf("%d ", x);
		x--;
	}
	
	return 0;
}
