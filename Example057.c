#include <stdio.h>
#include <stdlib.h>

// It computes the total of the: 
// 1 + 1/2 + 1/3 + 1/4 + ... + 1/n

int main(){
	
	int n, i;
	float total = 0.0;
	
	printf("Please enter the n: ");
	scanf("%d", &n);
	
	if(n > 0){
		
		i=1;
		do{
			total += (float)1/i;
			i++;
		}while(i <= n);
		
		printf("Total: %.2f", total);
	}
	else
		printf("n must not be less than 1!");
	
	return 0;
}
