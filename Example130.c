#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

union calculate{
	float circum;
	float area;
};

int main(){
	
	union calculate cal;
	float r;
	
	printf("Please enter the radius of the circle: ");
	scanf("%f", &r);
	
	cal.circum = 2 * PI * r;
	printf("Circumference of the circle = %.2f\n", cal.circum);
	
	cal.area = PI * r * r;
	printf("Area of the circle = %.2f", cal.area);

	return 0;
}
