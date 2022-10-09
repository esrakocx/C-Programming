#include <stdio.h>
#include <stdlib.h>

int IsPrime(int number, int i){
	
	if(i == 1)
		return 1;
	else if(number%i == 0)
		return 0;
	else
		return IsPrime(number, i-1);
}

int main(){
	
	int n, number, control;
	
	printf("Please enter a number: ");
	scanf("%d", &n);
	
	printf("The prime ones up to %d: \n", n);
	for(number=2; number<=n; number++){
		
		control = IsPrime(number, number/2);
		if(control == 1)
			printf("%d\n", number);
	}
	
	return 0;
}
