#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct coordinate{
	float x, y;
};

/*
It finds the location of the balls in time between 0.0-10.0 with these formulas:
x = 20 - 6cos(t)
y = 15 + 2sin(t)
*/

int main(){
	
	struct coordinate ball;
	float t;
	
	for(t=0.0; t<10.0; t+=0.1){
		
		ball.x = 20 - 6 * cos(t);
		printf("X Coordinate: %.2f ", ball.x);
		
		ball.y = 15 + 2 * sin(t);
		printf("Y Coordinate: %.2f \n", ball.y);
	}
	
	return 0;
}
