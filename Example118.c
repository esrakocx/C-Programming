#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num;
	char *day[7]= {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	
	do
	{
		printf("Please enter a number between 1-7 : ");
		scanf("%d", &num);
	}while(num<= 0 || num>7);
	
	printf("Index of %s is %d", day[num-1], num);
	
	return 0;
}
