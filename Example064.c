#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// It computes 1/x^2 + 3/x^4 + 5/x^6 + 7/x^8 + ... + 2n-1/x^2n

int main(){
	
	int x, n, i;
	float total = 0.0;
	
	printf("Enter the x: ");
	scanf("%d", &x);
	
	printf("Enter the n: ");
	scanf("%d", &n);
	
	for(i=1; i<=2*n-1; i+=2){
		total += i / pow(x, i+1);
	}
	
	printf("Total: %.2f", total);
	
	return 0;
}
