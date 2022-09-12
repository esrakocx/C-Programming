#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char letter;
	int place;
	
	printf("Please enter a letter: ");
	scanf("%c", &letter);
	
	if(letter >= 'A' && letter <= 'Z')
		place = (int)letter - (int)'A' + 1;
	
	else if(letter >= 'a' && letter <= 'z')
		place = (int)letter - (int)'a' + 1;
	
	else
		printf("Please enter a letter!");
		
	printf("The place of the %c : %d", letter, place);
	
	return 0;
}
