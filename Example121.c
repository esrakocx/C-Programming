#include <stdio.h>
#include <stdlib.h>

void print(int num){
	
	if(num == 0)
		printf("%d", num);
	else
	{
		printf("%d ", num);
		print(num-1);
	}
}

int main(){
	
	int num;
	
	printf("Please enter the number that you want to start: ");
	scanf("%d", &num);
	
	print(num);
	
	return 0;
}
