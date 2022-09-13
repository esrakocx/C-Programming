#include <stdio.h>
#include <stdlib.h>

int cal_fact(int num){	
	int fact = 1, i = 1;
	
	while(i <= num){
		fact *= i;
		i++;
	}
	return fact;
}

int main(){
	
	int num;
	
	printf("Please enter the number whose factorial you want to find: ");
	scanf("%d", &num);

	printf("%d! = %d", num, cal_fact(num));
	
	return 0;
}
