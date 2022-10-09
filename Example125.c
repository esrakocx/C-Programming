#include <stdio.h>
#include <stdlib.h>

void odd_nums(int beg, int last){
	
	if(beg <= last){
		printf("%d\n", beg);
		odd_nums(beg+2, last);
	}
}

int main(){
	
	int n, num;
	printf("Please enter a number: ");
	scanf("%d", &n);
	
	if(n%2 == 1)
		num = n;
	else
		num = n--;
	
	odd_nums(1,num);
	
	return 0;
}
