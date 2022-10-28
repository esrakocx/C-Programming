#include <stdio.h>
#include <stdlib.h>
#define customerN 2

struct customer{
	char name[20];
	char surname[20];
	int breakfast; // 0 = no , 1 = yes
	int dinner; // 0 = no , 1 = yes
	int hotel_service; // 0 = no notel service 2 = 2 stars 3 = 3 stars
	int friends; // 0 = alone 1 = with friend
	int amount;
};

void two_stars(struct customer c[customerN]){
	int i;
	printf("\nPeople who stay in two-stars hotel: \n");
	for(i=0; i<customerN; i++){
		if(c[i].hotel_service == 2)
			printf("Name: %s Surname: %s \n", c[i].name, c[i].surname);
	}
}

void breakfast(struct customer c[customerN], int *count){
	int i;
	*count = 0;
	for(i=0; i<customerN; i++){
		if(c[i].breakfast == 1)	{
			*count += 1;
			if(c[i].friends == 1)
				*count += 1;
		}
	}
}

void calculate_bill(struct customer c[customerN]){
	
	int i;
	for(i=0; i<customerN; i++){
		c[i].amount = 0;
		if(c[i].breakfast == 1)
			c[i].amount += 15; //breakfast is 15 dollars
		if(c[i].dinner == 1)
			c[i].amount += 35; //dinner is 35 dollars
		if(c[i].hotel_service == 2)
			c[i].amount += 75; // two-stars hotel is 75 dollars
		if(c[i].hotel_service == 3) // three-stars hotel is 100 dollars
			c[i].amount += 100;
		if(c[i].friends == 1)
			c[i].amount *= 2;
	}
	
	for(i=0; i<customerN; i++){
		printf("\nName: %s Surname: %s Total amount: %d dollars.", c[i].name, c[i].surname, c[i].amount);
	}
}
int main(){
	
	struct customer c[customerN];
	int i, count;
	
	for(i=0; i<customerN; i++){
		printf("Customer name: ");
		scanf("%s", &c[i].name);
		printf("Customer surname: ");
		scanf("%s", &c[i].surname);
		printf("Do you want to breakfast? (yes:1, no:0): ");
		scanf("%d", &c[i].breakfast);
		printf("Do you want to dinner? (yes:1, no:0): ");
		scanf("%d", &c[i].dinner);
		printf("Do you want to hotel service? (two-stars:2, three-stars:3, no:0): ");
		scanf("%d", &c[i].hotel_service);
		printf("Do you want to stay with your friend? (with friend:1, alone:0): ");
		scanf("%d", &c[i].friends);
		printf("\n");
	}
	
	two_stars(c);
	breakfast(c, &count);
	printf("\nNumber of people who have a breakfast: %d\n", count);
	calculate_bill(c);
	
	return 0;
}
