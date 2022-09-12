#include <stdio.h>
#include <stdlib.h>
#define constant 150

int main(){
	
	int no, height, diff, minH, minNo;
	
	printf("Student's number: ");
	scanf("%d", &no);
		
	printf("Student's height in cm: ");
	scanf("%d", &height);
	
	minNo = no;
	diff = abs(height-constant);
		
	while(no > 0){  //It stops if the number < 0
		printf("Student's number: ");
		scanf("%d", &no);
		
		printf("Student's height in cm: ");
		scanf("%d", &height);
		
		if(abs(height - constant) < diff){
			diff =abs(height - constant);
			minNo = no;
			minH = height;
		}
	}

	printf("The student with the number %d is the closest height to 150 with %d height.", minNo, minH);
	
	return 0;
}
