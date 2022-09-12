#include <stdio.h>
#include <stdlib.h>

// It calculates the 1/a + 1/b or 1/a - 1/b
int main(){
	
	char op;
	float a, b, total, difference;
	
	printf("Please enter the operation you want to do(+,-): ");
	scanf("%c", &op);
	
	printf("Enter a: ");
	scanf("%f", &a);
	printf("Enter b: ");
	scanf("%f", &b);
	
	if(a == 0 || b == 0)
		printf("a or b must no be 0!");
	else{
		switch(op){
			case '+': 
				total = 1/a + 1/b;
				printf("1/%.1f + 1/%.1f = %.1f", a, b, total);
				break;
			case '-':
				difference = 1/a - 1/b;
				printf("1/%.1f - 1/%.1f = %.1f", a, b, difference);
				break;
			default:
				printf("Incorrect operation!");
				break;
		}
	}
	return 0;
}
