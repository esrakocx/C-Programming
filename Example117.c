#include <stdio.h>
#include <stdlib.h>
#define max 100

int main(){
	
	char word[5][max];
	int i;
	char *ptr1, *ptr2, temp;
	
	printf("Please enter five words: \n");
	
	for(i=0; i<5; i++){
		printf("%d - ", i+1);
		scanf("%s", word[i]);
	}
	
	for(i=0; i<5; i++){
		
		ptr1 = ptr2 = word+i;
		
		while(*ptr2){
			ptr2++;
		}
		ptr2--;
		
		while(ptr1<ptr2){
			
			temp = *ptr1;
			*ptr1 = *ptr2;
			*ptr2 = temp;
			ptr1++;
			ptr2--;
		}
	}
	
	for(i=0; i<5; i++){
		printf("%s\n", *(word+i));
	}
	
	return 0;
}
