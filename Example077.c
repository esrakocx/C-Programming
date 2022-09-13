#include <stdio.h>
#include <stdlib.h>

int want_num(int num){
	
	printf("Please enter the number: ");
	scanf("%d", &num);
	
	return num;
}

int main(){
	
	int num;
	
	while(want_num(num) >= 0){
		want_num(num);
	}
		
	return 0;
}
