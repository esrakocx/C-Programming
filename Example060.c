#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float a, b, c;
	
	do{
		printf("Please enter the 1st angle of the triangle: ");
		scanf("%f", &a);
		printf("Please enter the 2nd angle of the triangle: ");
		scanf("%f", &b);
		printf("Please enter the 3rd angle of the triangle: ");
		scanf("%f", &c);
		
		if(a+b+c == 180){
			
			if(a == 60 && a == 60 && b == 60)
				printf("This is an equilateral triangle!\n");
				
			else if(a == b || a == c || b == c)
				printf("This is a right triangle!\n");
			
			else
				printf("This is a scalene triangle!\n");
		}
		
		else
			printf("These angles do not form a triangle!\n");
			
	}while(1);
	
	return 0;
}
