#include <stdio.h>
#include <stdlib.h>
#define taxBook 0.04
#define taxFood 0.056
#define taxLux 0.196

int main() {
	
	int productCode;
	float productFee;
	
	printf("Please enter the product's fee: ");
	scanf("%f", &productFee);
	
	printf("0 - For book's tax: \n1 - For staple food's tax: \n2 - For luxury stuff's tax: \nPlease enter the code of your product: ");
	scanf("%d", &productCode);
	
	switch(productCode){
		
		case 0:
			productFee += productFee * taxBook;
			printf("Total fee of your shopping: %.2f", productFee);
			break;
		
		case 1:
			productFee += productFee * taxFood;
			printf("Total fee of your shopping: %.2f", productFee);
			break;
		
		case 2:
			productFee += productFee * taxLux;
			printf("Total fee of your shopping: %.2f", productFee);
			break;
		
		default:
			printf("Incorrect code! Please try again!");
			break;
	}
		
	return 0;
}
