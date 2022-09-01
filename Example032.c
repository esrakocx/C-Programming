#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	// Is it a palindrome word or not? 
	
	char word[50];
	int control;
	
	printf("Please enter a word: ");
	scanf("%s", &word);
	
	char *start, *end;
	
	for(end=word; *end; end++);  // the loop continues until it see \0 (so, end of the word)
	
	end--;
	
	control = 1;
	for(start=word; control && start<end; start++, end--){
		
		if(*start != *end){
			control = 0;
		}
	}
	
	if(control)
		printf("%s is a palindrome word!", word);
	else
		printf("%s is not a palindrome word!", word);
	
	return 0;
}
