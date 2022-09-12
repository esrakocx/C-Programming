#include <stdio.h>
#include <stdlib.h>

/* It prints the word like that:

c
c l
c l a
c l a n
c l a n g
c l a n g u
c l a n g u a
c l a n g u a g
c l a n g u a g e
*/

int main(){
	
	char word[50];
	int i, j;
	
	printf("Please enter your word: ");
	gets(word);
	
	for(i=0; i<strlen(word); i++){
		for(j=0; j<=i; j++){
			printf("%c ", word[j]);
		}
		printf("\n");
	}	
	
	return 0;
}
