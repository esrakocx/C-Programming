#include <stdio.h>
#include <stdlib.h>

struct control1{
	int x;
	char y;
	long z;
};

union control2{
	int a;
	char b;
	long c;
};

int main(){
	
	struct control1 c1;
	union control2 c2;
	
	printf("Struct memory space: %d byte\n", sizeof(c1)); 
	printf("Union memory space: %d byte", sizeof(c2));
	
	return 0;
}
