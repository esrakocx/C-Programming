#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student{
	char name[20];
	char surname[20];
	int id;
	int _class;
};

int main(){
	
	struct student std;
	printf("Please enter student id: ");
	scanf("%d", &std.id);
	
	if(std.id == 2019){
		
		std.id = 2019;
		strcpy(std.name, "Esra");
		strcpy(std.surname, "Koc");
		std._class = 2;
		
		printf("Name: %s\nSurname: %s\nID: %d\nClass: %d\n", std.name, std.surname, std.id, std._class);	
	}
	
	else
		printf("Student ID is incorrect!");
	
	return 0;
}
