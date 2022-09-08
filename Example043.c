#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student_info{
	
	char name[20];
	char surname[20];
	int age;
	int student_id;
	
};

int main(){
	
	struct student_info student1, student2;
	
	// Assignment in character strings is done with strcpy()
	
	strcpy(student1.name , "Esra");
	strcpy(student1.surname , "Koc");
	student1.age = 20;
	student1.student_id = 0330;
	
	// The information of student1 is copied to student2
	student2 = student1;
	
	printf("Name: %s\n", student2.name);
	printf("Surname: %s\n", student2.surname);
	printf("Age: %d\n", student2.age);
	printf("Student ID: %d", student2.student_id);	
	
	return 0;
}
