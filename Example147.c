#include <stdio.h>
#include <stdlib.h>

/*
Short Circuit Evaluation
When the first argument of the AND(&&) function evaluates to false, the overall value must be false; you do not need to check the second statement
And when the first argument of the OR(||) function evaluates to true, the overall value must be true; you do not need to check the second statement.

And for this reason the output of this program must be 1 2 7 4 3
*/

int main(){
	
	int a = 9, b = 4, c = 7, d = 1, e = 3;
	
	while((a=1) == 1 && (b=2) == 3 && (c=3) == 3 || (d=4) == 4 || (e=5) == 7){
		
		// a = 1. it became true. you should check the second statement.
		// b = 2 
		// because b is not 3, the statement is false. you do not need to check c = 3 part.
		// c = 7 stayed the same
		// 7 is not equal to 3. the statement is false. you can check d = 4 part
		// now d = 4. it is true. you do not need to check e = 5 part.
		// e = 3 stayed same
		
		printf("%d %d %d %d %d", a,b,c,d,e);
		break;
	}
		
	return 0;
}
