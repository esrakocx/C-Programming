#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct time{
	int second;
	int minute;
	int hour;	
};

void difference(struct time t1, struct time t2, struct time *diff){
		
	if(t2.second > t1.second){
		--t1.minute;
		t1.second += 60;
	}
	diff->second = t1.second - t2.second;
		
	if(t2.minute > t1.minute){
		--t1.hour;
		t1.minute += 60;
	}
	diff->minute = t1.minute - t2.minute;
	
	diff->hour = t1.hour - t2.hour;
}

int main(){
	
	struct time t1, t2, diff;
	
	printf("Beginning time (hour, minute, second) : \n");
	scanf("%d %d %d", &t1.hour, &t1.minute, &t1.second);
	
	printf("Finish time (hour, minute, second) : \n");
	scanf("%d %d %d", &t2.hour, &t2.minute, &t2.second);
	
	difference(t1, t2, &diff);
	printf("The difference between two times -> %d : %d : %d - %d : %d : %d = %d : %d : %d\n", t1.hour, t1.minute, t1.second, t2.hour, t2.minute, t2.second, diff.hour, diff.minute, diff.second);
	
	return 0;
}
