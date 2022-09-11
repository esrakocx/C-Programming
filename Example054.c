#include <stdio.h>
#include <stdlib.h>

/*Square meters of the carpet is 40 tl.
The labor cost is 200 tl.
It asks the square meters of their room to the user. And then it calculates the total price for the carpet
*/

struct carpet{
	int m2Price, labor;	
	float total;
};

int main(){
	
	struct carpet c;
	float m2;
	c.m2Price = 40;
	c.labor = 200;
	
	printf("What is the m2 of your room? :");
	scanf("%f", &m2);
	
	c.total = m2 * c.m2Price + c.labor;
	
	printf("Total price: %.2f", c.total);
	
	return 0;
}
