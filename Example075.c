#include <stdio.h>
#include <stdlib.h>

int cal_pow(int num, int pow){	
	int i, result=1;
	
	for(i=1; i<=pow; i++){
		result = num * result; 
	}
	return result;
}

int main(){
	
	int pow, num;
	
	printf("Please enter the number: ");
	scanf("%d", &num);
	
	printf("Please enter the power of number: ");
	scanf("%d", &pow);

	printf("%d ^ %d = %d", num, pow, cal_pow(num, pow));
	
	return 0;
}
