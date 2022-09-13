#include <stdio.h>
#include <stdlib.h>

int perfect(int num){
	int i, total=0;
	
	for(i=1; i<num; i++){
		if(num % i == 0)
			total += i;
	}
	
	if(total == num)
		return 1;
	else
		return 0;
}

int main(){
	
	int num;
	
	printf("Please enter a number: ");
	scanf("%d", &num);
	
	if(perfect(num) == 1)
		printf("%d is a perfect number!", num);
	else
		printf("%d is not a perfect number!", num);	
	
	return 0;
}
