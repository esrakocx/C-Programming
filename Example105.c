#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculate_area(float a, float b, float c){
	
	float u = (a+b+c)/2;
	
	return sqrt(u*(u-a)*(u-b)*(u-c));	
}

int main(){
	
	float a, b, c;
	printf("Please enter the sides of the triangle:\n");
	scanf("%f%f%f", &a, &b, &c);
	
	printf("The area of the triangle: %.2f", calculate_area(a,b,c));	
	
	return 0;
}
