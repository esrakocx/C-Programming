#include <stdio.h>
#include <stdlib.h>

struct address_notebook{
	char name[20];
	char surname[20];
	char tel[10];
	char address[100];
	char postCode[6];	
};

int main(){
	
	int n, i;
	char line;
	printf("Please enter the number of people to add your address notebook: ");
	scanf("%d",&n);
	scanf("%c", &line);
	
	struct address_notebook add_nb[n];
	
	for(i=0; i<n; i++){
		printf("\nFor person %d: \n", i+1);
		printf("Name: "); gets(add_nb[i].name);
		printf("Surname: "); gets(add_nb[i].surname);
		printf("Phone number: "); gets(add_nb[i].tel);
		printf("Adress: "); gets(add_nb[i].address);
		printf("Post code: "); gets(add_nb[i].postCode);
	}
	
	printf("\nName\tSurname\tPhone\tAddress\tPostCode\n");
	printf("=================================================\n");
	
	for(i=0; i<n; i++){
		printf("%s \t %s \t %s \t %s \t %s\n", add_nb[i].name, add_nb[i].surname, add_nb[i].tel, add_nb[i].address, add_nb[i].postCode);
	}
	
	return 0;
}
