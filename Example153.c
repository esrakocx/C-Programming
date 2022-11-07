#include <stdio.h>
#include <stdlib.h>

void reverse(char *sentence, int len){
	
	if(len == 0)
		printf("%c", sentence[len]);
	else
	{
		printf("%c", sentence[len]);
		reverse(sentence, len-1);
	}
}

int main(){
	
	char sentence[100];
	printf("Please enter a sentence: ");
	gets(sentence);
	
	reverse(sentence, strlen(sentence)-1);
	
	return 0;
}
