#include <stdio.h>
#include <stdlib.h>

// Union allocates storage to equal to largest one

union intro{
	
	char a;
	int b;
	float c;
	
};

int main(){
	
	union intro i;
	
	i.a = 'E';
	i.b = 1;
	i.c = 1.2;
	
	printf("The total area of the union = %d byte", sizeof(i)); 
	// 4 byte so the largest one according to float and int
		
	return 0;
}
