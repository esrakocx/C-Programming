#include <stdio.h>
#include <stdlib.h>

struct valueType{
	int type;
	union {
		char ch;
		float num;
	}uni;
};

int main(){
	
	struct valueType values[20];
	int i = -1, j, n=0;
	char row;
	float total = 0.0;
	
	do{
		i++;
		printf("Please enter 1 to char and enter 0 to reel number: ");
		scanf("%d", &values[i].type);
		scanf("%c", &row);
		
		if(values[i].type == 1){
			printf("Please enter a char: ");
			scanf("%c", &values[i].uni.ch);
			scanf("%c", &row);
		}
		
		else if(values[i].type == 0){
			printf("Please enter a reel number: ");
			scanf("%f", &values[i].uni.num);
		}
		
	}while(values[i].type == 0 || values[i].type == 1);
	
	for(j=0; j<=i; j++){
		if(values[j].type == 0){
			total += values[j].uni.num;
			n++;
		}
	}
	
	printf("The average of your numbers: %.2f", total/n);
	
	return 0;
}
