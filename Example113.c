#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#include <string.h>

void remove_letter(char *arr, char letter){
	
	char *ptr;
	
	/*for(ptr=arr; *ptr; ptr++){
		if(*ptr == letter)
			strcpy(ptr, ptr+1);
	}*/
	
	ptr = arr;
	while(*ptr){
		if(*ptr == letter)
			strcpy(ptr, ptr+1);
		else
			ptr++;
	}
}

int main(){
	
	char arr[MAX];
	char letter;
	printf("Please enter a string: ");
	gets(arr);
	printf("%s", arr);
	
	printf("\nPlease enter the letter that you want to remove: ");
	scanf("%c", &letter);
	
	remove_letter(arr, letter);
	printf("%s", arr);
	
	return 0;
}
