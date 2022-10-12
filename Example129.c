#include <stdio.h>
#include <stdlib.h>

union share{
	int x, y;
};

int main(){
	
	int *X, *Y;
	union share uni;
	
	uni.x = 100;
	X = &uni.x;
	printf("Integer(x) = %d Memory Address: %X\n", uni.x, X);
	
	uni.y = 200;
	Y = &uni.y;
	printf("Integer(y) = %d Memory Address: %X", uni.y, Y);
	
	return 0;
}
