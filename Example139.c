#include <stdio.h>
#include <stdlib.h>

typedef struct complex_num{
	float real;
	float imaginary;
}complex;
	
void sum(complex c1, complex c2){
	complex temp;
	temp.real = c1.real + c2.real;
	temp.imaginary = c1.imaginary + c2.imaginary;
	printf("\n%.1f + %.1fi \n%.1f + %.1fi \n=%.1f + %.1fi", c1.real, c1.imaginary, c2.real, c2.imaginary, temp.real, temp.imaginary);
}

int main(){
	
	complex n1, n2;
	
	printf("Real part of the first number: ");
	scanf("%f", &n1.real);
	printf("Imaginary part of the first number: ");
	scanf("%f", &n1.imaginary);
	
	printf("Real part of the second number: ");
	scanf("%f", &n2.real);
	printf("Imaginary part of the second number: ");
	scanf("%f", &n2.imaginary);
	
	sum(n1, n2);	
	
	return 0;
}
