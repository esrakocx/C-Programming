#include <stdio.h>
#include <stdlib.h>
#define N 2

struct player{
	char name[20];
	char surname[20];
	int age;
	int level;
};

struct team{
	char team_name[50];
	struct player p1;
	struct player p2;
};

void create_team(struct team *t){
	scanf("%s", t->team_name);
	printf("For player 1: \n");
	create_player(&t->p1);
	printf("For player 2: \n");
	create_player(&t->p2);	
}

void create_player(struct player *p){
	printf("Player name: "); scanf("%s", p->name);
	printf("Player surname: "); scanf("%s", p->surname);
	printf("Player age: "); scanf("%d", &p->age);
	printf("Player level: "); scanf("%d", &p->level);
}

void pr_team(struct team t){
	printf("Team name: %s\n", t.team_name);
	printf("Player 1: \n");
	pr_player(t.p1);
	printf("Player 2: \n");
	pr_player(t.p2);
}
void pr_player(struct player p){
	printf("Player Name: %s\n", p.name);
	printf("Player Surname: %s\n", p.surname);
	printf("Player Age: %d\n", p.age);
	printf("Player Level: %d\n", p.level);
}
int main(){
	
	struct team t[N];
	int i;
	for(i=0; i<N; i++){
		printf("Team %d Name: ", i+1);
		create_team(&t);
		printf("\n");
	}
	for(i=0; i<N; i++){
		printf("Team %d: ", i+1);
		pr_team(t[i]);
	}	
	
	return 0;
}
