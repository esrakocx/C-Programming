#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

float calculate(char choice1, char choice2){
	
	int a, b, c, r, h;
	switch(choice1){
		case '1':
			printf("The side of the cube: ");scanf("%d", &a);
			
			if(choice2 == 'V' || choice2 == 'v')
				return a*a*a;
				
			else if(choice2 == 'A' || choice2 == 'a')
				return 6*a*a;
			
			else
				return 0;
			break;
		
		case '2':
			printf("The radius of cyclindir: ");scanf("%d", &r);
			printf("The lenght of the cyclindir: ");scanf("%d", &h);
			
			if(choice2 == 'V' || choice2 == 'v')
				return PI*r*r*h;
				
			else if(choice2 == 'A' || choice2 == 'a')
				return 2*PI*r*h;
			
			else
				return 0;
			break;
		
		case '3':
			printf("The radius of sphere: ");scanf("%d", &r);
			
			if(choice2 == 'V' || choice2 == 'v')
				return 1.33*PI*r*r*r; //1.33 = 4/3
				
			else if(choice2 == 'A' || choice2 == 'a')
				return 4*PI*r*r;
			
			else
				return 0;
			break;
		
		case '4':
			printf("The radius of cone: ");scanf("%d", &r);
			printf("The lenght of the cone: ");scanf("%d", &h);
			
			if(choice2 == 'V' || choice2 == 'v')
				return 0.33*PI*r*r*h; //0.33 = 1/3
				
			else if(choice2 == 'A' || choice2 == 'a')
				return (PI*r*r) + (PI*r*h);
			
			else
				return 0;
			break;
		
		case '5':
			
			printf("The long side of rectangle: ");scanf("%d", &a);
			printf("The short side of the rectangle: ");scanf("%d", &b);
			printf("The lenght of rectangular prism: ");scanf("%d", &h);
			
			if(choice2 == 'V' || choice2 == 'v')
				return a*b*h;
				
			else if(choice2 == 'A' || choice2 == 'a')
				return 2*(a*b + a*h + b*h);
			
			else
				return 0;
			break;
		
		case '6':
			
			printf("The perpendicular side of triangle: ");scanf("%d", &a);
			printf("The base of the triangle: ");scanf("%d", &b);
			printf("The hypotenuse of the triangle: ");scanf("%d", &c);
			printf("The lenght of the triangular prism: ");scanf("%d", &h);
			
			if(choice2 == 'V' || choice2 == 'v')
				return 0.5*b*a*h;
				
			else if(choice2 == 'A' || choice2 == 'a')
				return 2*(0.5*a*b + c*h);
			
			else
				return 0;
			break;
		
		case '7':
			
			printf("The long side of square: ");scanf("%d", &a);
			printf("The lenght of square prism: ");scanf("%d", &h);
			
			if(choice2 == 'V' || choice2 == 'v')
				return a*a*h;
				
			else if(choice2 == 'A' || choice2 == 'a')
				return 4*a*h + 2*a*a;
			
			else
				return 0;
			break;
		
		default:
			return 0;
			break;
	}
}

int main(void){
	
	char choice1, choice2;
	
	while(1){
		
		printf("~~MENU~~\n");
		printf("1-Cube\n2-Cylinder\n3-Sphere\n4-Cone\n5-Rectangular Prism\n6-Triangular Prism\n7-Square Prism\n8-To exit\n\n");
		printf("Please enter your choice: ");
		scanf(" %c", &choice1);
		
		if(choice1 == '8'){
			printf("Exiting...");
			break;
		}
		else{
			printf("Do you want to volume or area?(V: Volume / A: Surface Area) : ");
			scanf(" %c", &choice2);
			printf("Result = %.2f\n\n", calculate(choice1, choice2));
		}
	}
	
	return 0;
}
