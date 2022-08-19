#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char word1[] = "Bonne";
	char word2[] = "soiree";
	char result[10] = "";
	
	strcpy(result, word1);
	strncpy(result+3, word2, 5);
	
	printf("%s",result);
	
	return 0;
}
