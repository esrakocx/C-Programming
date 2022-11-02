#include <stdio.h>
#include <stdlib.h>

void series(int beg, int final, int rise){
	
	if(beg <= final){
		printf("%d ", beg);
		series(beg+rise, final, rise);
	}	
}

int main(){
	
	int beg, final, rise;
	
	printf("Please enter the beginning value: ");
	scanf("%d", &beg);
	printf("Please enter the final value: ");
	scanf("%d", &final);
	printf("Please enter the rise value: ");
	scanf("%d", &rise);
	
	series(beg, final, rise);
	
	return 0;
}
