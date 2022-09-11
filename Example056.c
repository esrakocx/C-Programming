#include <stdio.h>
#include <stdlib.h>

//It converts lowercase letters to uppercase letters

int main(){
	
	char letter;
	printf("Please enter an uppercase letter: ");
	scanf("%c", &letter);
	
	if(letter >= 'A' && letter <= 'Z')
		printf("Your lowercase letter: %c", tolower(letter));
	
	else if(letter >= 'a' && letter <= 'z')
		printf("Your letter is already lowercase!");
	
	else
		printf("Incorrect input!");
	
	return 0;
}
