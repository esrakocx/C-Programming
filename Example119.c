#include <stdio.h>
#include <stdlib.h>
#define studentNum 10

//This program calculate the students' total notes according to the teacher's answer key

struct student{
	int std_ID;
	char answer[10];
};

struct result{
	int std_ID;
	float note;
};

int main(){
	
	struct student std[studentNum];
	struct result rslt[studentNum];
	int i, j;
	float _false, _true;
	char answer_key[10];
	
	printf("Please enter the answer key: \n");
	for(i=0; i<10; i++){
		scanf("%s", &answer_key[i]);
	}
	
	for(i=0; i<studentNum; i++){
		
		printf("Student ID: \n");
		scanf("%d", &std[i].std_ID);
		
		_false = _true = 0;
		rslt[i].std_ID = std[i].std_ID;
		
		printf("%d's answers : \n", std[i].std_ID);
		for(j=0; j<10; j++){
			scanf("%s", &std[i].answer[j]);
			
			if(std[i].answer[j] == answer_key[j])
				_true++;
			else if(std[i].answer[j] != ' ')
				_false++;
		}
		
		printf("True: %.2f\nFalse: %.2f\n", _true, _false);
		rslt[i].note = _true - (_false/4);
		printf("Student ID: %d Total note: %.2f\n\n", rslt[i].std_ID, rslt[i].note);
	}
	
	return 0;
}
