#include <stdio.h>
#include <stdlib.h>

/*This is a ice skating game. There are 10  referees in this game and they give points between 0-6.
The point is calculated like that: total = (total-max point -min point)/8
And end of the program the total performance is printed for the player. */

struct player{
	
	char name[20], surname[20];
	float point[10], performance;
};

float calculate_score(struct player p){
	
	float max = 0.0, min = 6.0, result = 0.0;
	int i;
	
	for(i=0; i<10; i++){
		
		if(p.point[i] > max)
			max = p.point[i];
			
		if(p.point[i] < min)
			min = p.point[i];
		
		result += p.point[i];
	}
	
	result = (result-max-min)/8;		
	return result;
}

int main(){
	
	struct player p;
	int i;
	
	printf("Player's name: ");
	scanf("%s", &p.name);
	
	printf("Player's surname: ");
	scanf("%s", &p.surname);
	
	printf("Referee points: \n");
	for(i=0; i<10; i++){
		printf("%d - Point: ", i+1);
		scanf("%f", &p.point[i]);
	}
	
	p.performance = calculate_score(p);
	printf("%.2f", p.performance);
	return 0;
}
