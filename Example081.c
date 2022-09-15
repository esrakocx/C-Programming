#include <stdio.h>
#include <stdlib.h>

/* It prints an array like that: 

How many columns do you want to enter? :12
p       0       1       2       3       4       5       6       7       8       9       10      11
n
------------------------------------------------------------------------------------------------------------
0 --    1
1 --    1       1
2 --    1       2       1
3 --    1       3       3       1
4 --    1       4       6       4       1
5 --    1       5       10      10      5       1
6 --    1       6       15      20      15      6       1
7 --    1       7       21      35      35      21      7       1
8 --    1       8       28      56      70      56      28      8       1
9 --    1       9       36      84      126     126     84      36      9       1
10 --   1       10      45      120     210     252     210     120     45      10      1
11 --   1       11      55      165     330     462     462     330     165     55      11      1

*/

int main(){
	
	int num, i, j;
	
	printf("How many columns do you want to enter? :");
	scanf("%d", &num);
	
	printf("p\t");
	
	for(i=0; i<num; i++){
		printf("%d\t", i);
	}
	
	printf("\nn\n");
	
	for(i=0; i<num; i++){
		printf("---------");
	}
	
	int arr[num][num];
	
	for(i=0; i<num; i++){
		
		arr[i][i] = 1;
		arr[i][0] = 1;
		
		for(j=1; j<i; j++){
			arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
		}
	}
	
	for(i=0; i<num; i++){
		printf("\n%d --", i);		
		for(j=0; j<=i; j++){
			printf("\t%d", arr[i][j]);
		}
	}
	
	return 0;
}
