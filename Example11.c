#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//Getting 3 numbers from user and printing them
	
	int numbers[3];
	int i=0;
	
	for(i=0; i<3; i++){
		scanf("%d", &numbers[i]);
	}
	
	for(i=0; i<3; i++){
		printf("Number %d: %d\n", i+1, numbers[i]);
	}
	
	return 0;
}
