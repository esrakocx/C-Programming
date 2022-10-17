#include <stdio.h>
#include <stdlib.h>
#define N 100

//It takes the data of medicines and prints less than 20

struct pharmacy{
	
	char medicine_name[20];
	int amount;
	int price;
	
};

int main(){
	
	struct pharmacy data[N];
	int i;
	
	for(i=0; i<N; i++){
		
		fflush(stdin);
		printf("Medicine name: ");
		gets(data[i].medicine_name);
		
		printf("Medicine amount: ");
		scanf("%d", &data[i].amount);
		
		printf("Medicine price: ");
		scanf("%d", &data[i].price);
	}
	
	printf("\nMedicine name: \n==============\n");
	
	for(i=0; i<N; i++){
		if(data[i].amount < 20)
			printf("%s\n", data[i].medicine_name);
	}
	
	return 0;
}
