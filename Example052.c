#include <stdio.h>
#include <stdlib.h>

struct players{
	char name[20], surname[20];
	float point[5], performance;
};

float calculate_point(struct players p){
	
	int i;
	float max = 0.0, min = 6.0, result;
	
	for(i=0; i<5; i++){
		if(p.point[i] > max)
			max = p.point[i];
		if(p.point[i] < min)
			min = p.point[i];
		
		result += p.point[i];
	}
	
	result = (result-max-min)/3;
	return result;
}

int main(){
	
	int i, j, n, winner;
	float max = 0.0;
	struct players p[50];
		
	printf("Please enter the number of players: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		printf("%d - Player's name: ", i+1);
		scanf("%s", p[i].name);
		
		printf("%d - Player's surname: ", i+1);
		scanf("%s", p[i].surname);
		
		printf("Refeeres points: \n");
		
		for(j=0; j<5; j++){
			printf("Points of number %d: ", i+1);
			scanf("%f", &p[i].point[j]);
		}
		
		p[i].performance = calculate_point(p[i]);
		printf("Performance = %.2f \n", p[i].performance);
		
		if(p[i].performance > max){
			max = p[i].performance;
			winner = i;		
		}
	}
	
	printf("Winner :\n");
	printf("Name: %s Surname: %s Point: %.2f", p[winner].name, p[winner].surname, max);
		
	return 0;
}
