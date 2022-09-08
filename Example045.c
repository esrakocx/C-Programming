#include <stdio.h>
#include <stdlib.h>

typedef struct{
	
	char name[10];
	float x, y;
	
}point;

void print_info(point p[], int n){
	
	int i;
	for(i=0; i<n; i++){
		printf("%s = (%.f,%.f)\n", p[i].name, p[i].x, p[i].y);
	}
}

int main(){
	
	point info[5] = {{"Student1", 1, 2}, {"Student2", 3, 4}, {"Student3", 5, 6}, {"Student4", 7, 8}, {"Student5", 9, 10}};
	print_info(info, 5);
	
	return 0;
}
