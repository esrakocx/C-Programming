#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char sentence[500];
	int i=0, counter=0;
	
	printf("Please enter your sentence: ");
	gets(sentence);
	
	while(sentence[i]){
		if(sentence[i] == 32){ // ASCII code of the space is 32
			counter++;
		}
		i++;
	}
	
	printf("There are %d words in your sentence.", counter+1);
	
	return 0;
}
