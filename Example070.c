#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char sentence[500];
	int i;
	
	printf("Please enter your sentence: ");
	gets(sentence);
	
	for(i=0; sentence[i]; i++){
		printf("%c\n", sentence[i]);
	}
	
	return 0; 
}
