#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char sentence[500];
	int i=0, character=0;
	
	printf("Please enter your sentence: ");
	gets(sentence);
	
	while(sentence[i]) {
		character++;
		i++;
	}
	
	printf("There are %d characters in your sentence. ", character);
	
	return 0;
}
