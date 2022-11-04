#include <stdio.h>
#include <stdlib.h>

// It wants to you enter a number while you enter 0 with recursive function

void IsZero(){
	
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	
	if(num == 0)
		exit(0);
	else
		IsZero();
}

int main(){
		
	IsZero();

	return 0;
}
