#include <stdio.h>
#include <stdlib.h>

typedef enum {
	
	January=1,
	February,
	March,
	April, 
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December,
	
}months;

void which_month(months mon){
	
	switch(mon){
		
		case 1: printf("January");
			break;
		case 2: printf("February");
			break;
		case 3: printf("March");
			break;
		case 4: printf("April");
			break;
		case 5: printf("May");
			break;
		case 6:	printf("June");
			break;
		case 7:	printf("July");
			break;
		case 8: printf("August");
			break;
		case 9:	printf("September");
			break;
		case 10: printf("October");
			break;
		case 11: printf("November");
			break;
		case 12: printf("December");
			break;
		default: printf("Incorrect input!");
			break;
	}
	
}

int main(){
	
	months m;
	printf("To find the name of the month, please enter a number from 1-12: ");
	scanf("%d", &m);
	
	which_month(m);
	
	return 0;
}
