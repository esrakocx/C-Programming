#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Skips 5. Ends at 8
	
	int i;
	
	for(i=0; i<10; i++){
		
		if(i == 5)
			continue;
		if(i == 8)
			break;
		
		printf("%d\n",i);		
	}
	
	return 0;
}
