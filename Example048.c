#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct car{
	
	int sold;
	float price;
	char brand[20];

}car_A, car_B, car_C;

void show_info(char choice, struct car car_A, struct car car_B, struct car car_C){
	
	switch (choice){
		
		case 'A' :
			
			strcpy(car_A.brand, "Mercedes");
			car_A.price = 40000;
			car_A.sold = 1;
			
			if(car_A.sold == 1)
				printf("\nThe car was sold!");
			else
				printf("\nBrand: %s\nPrice: %.2f", car_A.brand, car_A.price);
			break;
			
		case 'B' :
			
			strcpy(car_B.brand, "Toyota");
			car_B.price = 24000;
			car_B.sold = 0;
			
			if(car_B.sold == 1)
				printf("\nThe car was sold!");
			else
				printf("\nThis car was not sold!\nBrand: %s\nPrice: %.2f", car_B.brand, car_B.price);
			break;
		
		case 'C' :
			
			strcpy(car_C.brand, "Renault");
			car_C.price = 22000;
			car_C.sold = 0;
			
			if(car_C.sold == 1)
				printf("\nThe car was sold!");
			else
				printf("\nThis car was not sold!\nBrand: %s\nPrice: %.2f", car_C.brand, car_C.price);
			break;
	
		default:
			printf("Incorrect input!");
			break;		
			
	}	
}

int main(){
	
	struct car car_A, car_B, car_C;
	char choice;
	
	printf("Please enter\nA to Mercedes\nB to Toyota\nC to Renault \n\nYour choice: ");
	scanf("%s", &choice);
	
	if(choice == 'A' || 'a')
		show_info(choice, car_A, car_B, car_C);
	else if(choice == 'B' || 'b')
		show_info(choice, car_A, car_B, car_C);
	else if(choice == 'C' || 'c')
		show_info(choice,  car_A, car_B, car_C);
		
	
	return 0;
}
