#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//It finds the multiples of 17 up to the number you entered
	
	int n, i, row;
	i=0, row=0;
	
	printf("Please enter a number: ");
	scanf("%d", &n);
	
	printf("Multiples of 17: \n");
	
	while(i <= n){
		if(i % 17 == 0){
			printf("%4d ", i);
			row++;
						
			if(row % 10 == 0)
				printf("\n");
		}
		i++;
	}
	
	return 0;
}
