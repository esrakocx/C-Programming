#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int year = 0;
	float rabbitsNum = 1042, birdsNum = 2272; //Firstly number of animals
	
	while(rabbitsNum < birdsNum){
		
		rabbitsNum += rabbitsNum * 0.038;  //rate of increase
		birdsNum += birdsNum * 0.012;
		
		year++;
		printf("Year %d - Rabbit: %.f Birds: %.f\n", year, rabbitsNum, birdsNum);
	}
	
	printf("The number of rabbits will exceed the number of birds in %d years.", year);	
	
	return 0;
}
