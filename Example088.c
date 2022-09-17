#include <stdio.h>
#include <stdlib.h>

//Lists odd numbers up to the number you entered

int ls_odd(int num){
	return num%2;
}

int main(){
	
	int i=0, num;
	
	printf("Please enter a number: ");
	scanf("%d", &num);
	
	printf("Odd numbers: \n");	
	while(i <= num){
		if(ls_odd(i) == 1)
			printf("%d\n", i);
		i++;
	}
		
	return 0;
}
