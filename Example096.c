#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

float area(float r){	
	return PI * r * r;
}

float circum(float r){
	return 2 * PI * r;
}

int main(){
	
	float r;
	
	printf("Please enter the radius of the circle: ");
	scanf("%f", &r);
	
	printf("Area of the circle: %.2f\n", area(r));
	printf("Circumference of the circle: %.2f", circum(r));
	
	return 0;
}
