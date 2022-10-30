#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

int main(){
	
	struct node* firstnode = NULL;
	
	firstnode = (struct node*)malloc(sizeof(struct node));
	struct node* secondnode = (struct node*)malloc(sizeof(struct node));
	
	firstnode->data = 23;
	firstnode->next = secondnode;
	
	secondnode->data = 22;
	secondnode->next = NULL;	
	
	printf("%d -> %d", firstnode->data, secondnode->data);
	
	return 0;
}
