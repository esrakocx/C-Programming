#include <stdio.h>
#include <stdlib.h>

typedef struct complex_num{
	float real, imaginary;
}complex;

void sum(complex c1, complex c2){
	
	complex result;
	result.real = c1.real + c2.real;
	result.imaginary = c1.imaginary + c2.imaginary;
	
	printf("%.f + %.fi\n", c1.real, c1.imaginary);
	printf("%.f + %.fi\n", c2.real, c2.imaginary);
	printf("Result = %.f + %.fi", result.real, result.imaginary);
}

int main(){
	
	complex c1, c2;
	printf("The real part of the 1st complex number: ");
	scanf("%f", &c1.real);
	
	printf("The imaginary part of the 1st complex number: ");
	scanf("%f", &c1.imaginary);
	
	printf("The real part of the 2nd complex number: ");
	scanf("%f", &c2.real);
	
	printf("The imaginary part of the 2nd complex number: ");
	scanf("%f", &c2.imaginary);
	
	sum(c1,c2);
	
	return 0;
}
