#include <stdio.h>
#include <stdlib.h>

int main()
{
	// A program that finds the largest number you entered
	
	int a, b, c;
	
	printf("Please enter three numbers:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a >= b && a >= c)
	{
		if (a == b && a == c)
			printf("All the numbers are equal!");
		else if (a == b)
			printf("%d and %d are equal and the largest numbers!", a, b);
		else if(a == c)
			printf("%d and %d are equal and the largest numbers!", a, c);
		else
			printf("%d is the largest number!", a);
	}
	
	else if (a <= b && c <= b)
	{
		if (a == b && b == c)
			printf("All the numbers are equal!");
		else if (a == b)
			printf("%d and %d are equal and the largest numbers!", b, a);
		else if(b == c)
			printf("%d and %d are equal and the largest numbers!", b, c);
		else
			printf("%d is the largest number!", b);
	}
	
	else
	{
		if (c == a && c == b)
			printf("All the numbers are equal!");
		else if (c == a)
			printf("%d and %d are equal and the largest numbers!", c, a);
		else if(c == b)
			printf("%d and %d are equal and the largest numbers!", c, b);
		else
			printf("%d is the largest number!", c);
	}
			
	return 0;
}
