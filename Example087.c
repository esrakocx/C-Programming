#include <stdio.h>
#include <stdlib.h>

int even_or_odd(int num){
	
	return num % 2;
}

int main(){
	
	int num;
	char input;
		
	while(1){
		
		printf("Please enter a number: ");
		scanf("%d", &num);
	
		if(even_or_odd(num)==0)
			printf("%d is even!\n", num);
			
		else
			printf("%d is odd!\n", num);
			
		printf("To exit tab esc: \nTo continue tab c:\n");
		
		if((int)getch()==27)
			break;
		else 
			continue;
	}
		
	return 0;
}
