#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int chance = 6, number, predict, flag = 0;
	srand(time(NULL));
	
	number = rand()%100;
	
	while(chance > 0 && predict != number){
		printf("Predict a number between 1-100: ");
		scanf("%d", &predict);
	
		if(predict < number){
			printf("Please enter larger number!\n");
			chance--;
		}
		else if(predict > number){
			printf("Please enter smaller number!\n");
			chance--;
		}
		else{
			flag = 1;
			printf("You're done! Congrats!");
			break;
		}
	}
	
	if(flag == 0)
		printf("You did not predict! Try again!");
	
	return 0;
}
