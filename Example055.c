#include <stdio.h>
#include <stdlib.h>
#define labor 200

struct carpet{
	char carpet_type[50];
	char code;
	int m2Price;
	float total;
};

float calculate(char code, float m2, struct carpet c){
	if(c.code == 'T'){
		c.m2Price = 18;
		c.total = m2 * c.m2Price + labor;
		return c.total;
	}
	else if(c.code == 'B'){
		c.m2Price = 17;
		c.total = m2 * c.m2Price + labor;
		return c.total;
	}
	else if(c.code == 'S'){
		c.m2Price = 19;
		c.total = m2 * c.m2Price + labor;
		return c.total;
	}
	else
		printf("Incorrect input! Try again!");
}

int main(){
	
	struct carpet c;
	float m2;
	
	while(1){
		
		printf("\n*****MENU*****\n\n");
		printf("T - Twetty carpet\n");
		printf("B - Bugs Bunny carpet\n");
		printf("S - Spiderman carpet\n");
		
		printf("\nPlease enter the code of the carpets you want to get info: ");
		scanf(" %c", &c.code);
		
		printf("Please enter the m2 of your room: ");
		scanf("%f", &m2);	
		
		printf("\nTotal price: %.2f\n", calculate(c.code, m2, c));
	}
	return 0;
}
