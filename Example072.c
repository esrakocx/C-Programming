#include <stdio.h>
#include <stdlib.h>

int main(){
	
   char sentence[100];
   int i = 0, count[26] = {0}, most=count[0], letter;
   printf("Enter a sentence/word: ");
   gets(sentence);
   
   while (sentence[i])
   {
      if (sentence[i] >= 'a' && sentence[i] <= 'z')
         count[sentence[i]-'a']++;
      i++;
   }
   
   for (i = 0; i < 26; i++)
   {
    	if (count[i] != 0){
			printf("%c occurs %d times in the entered sentence.\n", i+'a', count[i]);
         
	        if(count[i] > most){
	        	most = count[i];
	        	letter = i+'a';
			}
         	
		}
   }
	printf("%c is the most common letter in your sentence/word and its number: %d", letter, most);
	
	return 0;
}
