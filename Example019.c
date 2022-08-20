#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define circleArea(r) (PI*r*r)

int main(){
		
	float r, area;
	printf("Radius of the circle: ");
	scanf("%f", &r);
	
	area = circleArea(r);
	printf("Area: %.2f", area);
	
	return 0;
}
