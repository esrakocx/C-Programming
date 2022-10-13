#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct staff{
	int password;
	char name[10];
	char surname[10];
	int age;
	float salary;
	char gender[10];
}people;

void sort(people p[], int n){
	
	int i, j;
	people t;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(strcmp(p[i].name,p[j].name) > 0){
				t = p[i];
				p[i] = p[j];
				p[j] = t;
			}
		}
	}
}

void list(people p[], int n){
	
	int i;
	for(i=0; i<n; i++){ 
		printf("\n%d %s %s %d %.2f %s\n", p[i].password, p[i].name, p[i].surname, p[i].age, p[i].salary, p[i].gender);
	}
}

int main(){
	
	int n, i;
	printf("How many staff are there? : ");
	scanf("%d", &n);
	
	people p[n];
	
	for(i=0; i<n; i++){
		printf("\nFor Staff %d : \n", i+1);
		printf("Password: "); scanf("%d", &p[i].password);
		printf("Name: "); scanf("%s", &p[i].name);
		printf("Surname: "); scanf("%s", &p[i].surname);
		printf("Age: "); scanf("%d", &p[i].age);
		printf("Salary: "); scanf("%f", &p[i].salary);
		printf("Gender: "); scanf("%s", &p[i].gender);
	}
	
	sort(p,n);
	list(p,n);
	
	return 0;
}
