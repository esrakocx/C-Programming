#include <stdio.h>
#include <stdlib.h>

float convert_cel(float fah){
	return 0.5555*(fah-32);
}

float convert_fah(float cel){
	return (1.8*cel)+32;
}

int main(){
	
	float fah, cel;
	printf("1- Fahrenheit => Celcius\n");
	printf("2- Celcius => Fahrenheit\nYour choice: ");
	
	int choice;
	scanf("%d", &choice);
	
	if(choice == 1){
		printf("Please enter you Fahrenheit value: ");
		scanf("%f", &fah);
		printf("%.2fF = %.2fC", fah, convert_cel(fah));
	}
	else if(choice == 2){
		printf("Please enter your Celcius value: ");
		scanf("%f", &cel);
		printf("%.2fC = %.2fF", cel, convert_fah(cel));
	}
	else
		printf("Incorrect input!");
	return 0;
}
