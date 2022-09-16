#include <stdio.h>
#include <stdlib.h>

void find_len(char sentence[50], int *len){
	
	int i;
	for(i=0; sentence[i] != '\0'; i++);
	*len = i;
}

void common_letters(char first[50], char second[50], int *letter){
	
	int i, j;
	int len1, len2;
	*letter = 0;
	
	find_len(first, &len1);
	find_len(second, &len2);
	
	for(i=0; i<len1; i++){
		for(j=0; j<len2; j++){
			if(first[i]==second[j])
				*letter = *letter+1;
		}
	}
}

int main(){
	
	int i=0, len, letter;
	char sentence[50];
	char first[50], second[50];
	
	printf("Please enter a sentence or a word: ");
	do{
		
		scanf("%c", &sentence[i]);
		i++;
		
	}while(sentence[i-1] != '\n');
	
	sentence[i-1] = '\0';
	
	find_len(sentence, &len);
	printf("The length of the string: %d\n", len);
	
	printf("Please enter two words: ");
	scanf("%s %s", &first, &second);
	
	common_letters(first, second, &letter);
	printf("%s and %s have %d common letters.", first, second, letter);
	
	return 0;
}
