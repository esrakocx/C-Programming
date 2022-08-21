#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//It computes the floor area, sum of lateral areas, and the total area of the rectangular prism
	
	float w, l, h; // w= width, l= length, h= height
	
	printf("~Rectangular prism~\n\n");
	
	printf("Width: "); scanf("%f", &w);
	printf("Length: "); scanf("%f", &l);
	printf("Height: "); scanf("%f", &h);
	
	printf("Floor area: %.2f\n", w*l);
	printf("Sum of lateral areas: %.2f\n", 2*w*h + 2*l*h);
	printf("Total area of the rectangular prism: %.2f\n", 2*w*h + 2*l*h + 2*w*l);
	printf("Volume: %.2f", l*w*h);
	
	return 0;
}
