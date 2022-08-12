#include <stdio.h>
#include <stdlib.h>

int main(){
	
	// Print the odd and even numbers by using a while loop from 0 to 100.
	
	int i = 0;
	
	while(i <= 100){
		
		if(i % 2 == 0)
			printf("%d is even!\n", i);
		
		else 
			printf("%d is odd!\n",i);
		
		i++;
	}	
	
	return 0;
}
