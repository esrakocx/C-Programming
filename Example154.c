#include <stdio.h>
#include <stdlib.h>
#define max 100

int count_char(char *text){
	
	if(*text == '\0')
		return 0;
		
	else
		return 1 + count_char(text + 1);
}

int main(){
	
	char text[max];
	printf("Please enter a text: ");
	gets(text);	
	
	printf("The size of the text: %d", count_char(text));
	
	return 0;
}
