#include <stdio.h>
#include <stdlib.h>

void convert(int second){
	
	int hour = second / 3600;
	int min = (second % 3600) / 60;
	int sec = (second % 3600) % 60;
		
	printf("%d:%d:%d", hour, min, sec);
}

int main(){
	
	int second;
	printf("Please enter the second: ");
	scanf("%d", &second);	
	
	convert(second);
	
	return 0;
}
