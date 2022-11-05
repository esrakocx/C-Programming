#include <stdio.h>
#include <stdlib.h>

void display(int n){
	
	int i;
	if(n == 0)
		return 0;
	else
	{		
		for(i=0; i<n; i++)
			printf("* ");
			
		printf("\n");
		display(n-1);
	}
}

int main(){
	
	int n;
	printf("Please enter the limit value: ");
	scanf("%d", &n);
	
	display(n);	
	
	return 0;
}
