#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//It takes the path in miles and converts it to km
	
	float mil, km;
	
	printf("Mil: "); 
	scanf("%f", &mil);
	
	km = mil * 1.609; // 1 mil = 1.609 km
	
	printf("The path you take: %.4f km", km);
	
	return 0;
}
