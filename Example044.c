#include <stdio.h>
#include <stdlib.h>


struct dot{
	
	float *x, *y;
	
}p;

int main(){
	
	float x,y;
	
	p.x = &x;
	p.y = &y;
	
	printf("Please enter x-coordinate: ");
	scanf("%f", p.x);
	printf("Please enter the y-coordinate: ");
	scanf("%f", p.y);
	
	printf("The coordinate of the point: (%.f,%.f)", x, y);	
	
	return 0;
}
