#include <stdio.h>
#include <stdlib.h>

// It calculates the total cost of your phone call. 
// Up to 3 minutes the cost is 0.25 TL. If it is over, 0.08 TL per minute is charged.

int main(){
	
	float min, total;
	
	printf("How long did you make phone calls in minutes? : ");
	scanf("%f", &min);
	
	if(min <= 3)
		total = 0.25;
	
	else if(min > 3)
		total = (min - 3) * 0.08 + 0.25;
		
	printf("Total fee: %.2f", total);
	
	return 0;
}
