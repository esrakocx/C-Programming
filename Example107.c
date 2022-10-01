#include <stdio.h>
#include <stdlib.h>

//It combines two array

void combine(int a[], int b[], int c[], int d, int e){
	
	int i;
	
	int count = 0;
	for(i=0; i<d; i++){
		c[count] = a[i];
		count++;
	}
	for(i=0; i<e ; i++){
		c[count] = b[i];
		count++;
	}
}

int main(){
	
	int d, e, i;
	
	printf("Please enter the number of values of the a[] array: ");
	scanf("%d", &d);
	int a[d];
	
	for(i=0; i<d; i++){
		printf("%d - value: ", i+1);
		scanf("%d", &a[i]);
	}
	
	printf("Please enter the number of values of the b[] array: ");
	scanf("%d", &e);
	int b[e];
	
	printf("Please enter the values of the a[] array: \n");
	for(i=0; i<e; i++){
		printf("%d - value: ", i+1);
		scanf("%d", &b[i]);
	}
	
	int c[d+e];
	combine(a,b,c,d,e);
	
	
	printf("a[%d] Array: ", d);
	for(i=0; i<d; i++)
		printf("%d ", a[i]);
	
	printf("\nb[%d] Array: ", e);
	for(i=0; i<e; i++)
		printf("%d ", b[i]);
	
	printf("\nc[%d] Array: ", d+e);
	for(i=0; i<d+e; i++)
		printf("%d ", c[i]);
		
	return 0;
}
