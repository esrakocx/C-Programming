#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num1, *pt1;
	float num2, *pt2;
	double num3, *pt3;
	char ch, *pt4;
	char str[10], *pt5;
	
	pt1 = &num1;
	pt2 = &num2;
	pt3 = &num3;
	pt4 = &ch;
	pt5 = str;  //It is also possible with  pt5 = &str[0]
	
	printf("Please enter an integer number: "); scanf("%d", &num1);
	printf("Number is %d \n", num1);	// It's same with *pt1
	printf("The address of the %d is %d \n\n", num1, pt1); // It's same with &num1
	
	printf("Please enter a float number: "); scanf("%f", &num2);
	printf("Number is %f \n", num2);	// It's same with *pt2
	printf("The address of the %f is %d \n\n", num2, pt2); // It's same with &num2
	
	printf("Please enter a double number: "); scanf("%lf", &num3);
	printf("Number is %lf \n", num3);	// It's same with *pt3
	printf("The address of the %lf is %d \n\n", num3, pt3); // It's same with &num3
	
	printf("Please enter a char: "); scanf(" %c", &ch);
	printf("Char is %c \n", ch);	// It's same with *pt4
	printf("The address of the %c is %d \n\n", ch, pt4); // It's same with &ch
	
	printf("Please enter an string: "); scanf("%s", &str);
	printf("String is %s \n", str);	// It's same with *pt5
	printf("The address of the %s i %d \n", str, pt5); // It's same with &str[0]
	
	return 0;
}

