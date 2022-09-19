#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void add_values(int n, int nums[], int row_n, int val){
	
	int i;
	
	printf("\nPlease enter the index number you want to enter a value for: ");
	scanf("%d", &row_n);
	
	printf("Please enter the value you want to add: ");
	scanf("%d", &val);
	
	if(row_n <= n + 1){   // We add +1 because you can want to add the value en of the row
		
		for(i=n-1; i>=row_n-1; i--)
			nums[i+1] = nums[i];
		
		nums[row_n-1] = val;
		
		printf("%d added!\n\n", val);
	
		for(i=0; i<=n; i++)
			printf("%d ", nums[i]);
	}
	
	else
		printf("Please enter a valid row number!");
}

int main(){
	
	int n, row_n, i, val;
	srand(time(NULL));
	
	printf("How many random numbers will be generated?: ");
	scanf("%d", &n);
	
	int nums[n];
	
	for(i=0; i<n; i++){
		nums[i] = rand()%100;
		printf("%d ", nums[i]);
	}
	
	add_values(n,nums,row_n,val);
		
	return 0;
}
