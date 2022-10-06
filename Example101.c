#include<stdio.h>
#include <stdlib.h>
 
int IsPrime(int number){
	
	int i, flag = 1;
	
	for(i=2; i<number; i++){
		if(number%i == 0){
			flag = 0;
			break;
		}
	}

	if(flag == 1)
		return flag;
}
 
int main()
{
 	int n, number;
 	
 	printf("Please enter a number to print up to that number: ");
 	scanf("%d", &n);
 	
 	for(number=2; number<=n; number++){
 		if(IsPrime(number) == 1)
 			printf("%d ", number);
	 }
  
   return 0;
}
