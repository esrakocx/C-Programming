#include <stdio.h>
#include <stdlib.h>
#define max 10000

int main(void){
	
	//It prints the perfect numbers between 1-10000
	
	int i, num, sum;
	
	for(num = 1; num < max; num++){
		sum = 0;
		for(i = 1; i < num; i++){
			if(num % i == 0)
				sum += i;
		}
		if(sum == num)
			printf("%d ", num);
	}
	
	return 0;
}
