/*****************************************************
njit 2016-2017,     Ltd. 
File name：
Author jhw    Version:0.1    Date: 
Description：
Funcion List: 
*****************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
	int score;
	struct student *next;
}Stu;


int main()
{
	Stu *head, *q, *p;
	head = (Stu*)malloc(sizeof(Stu));
	head->next = NULL;

	for(int i=0; i<10; i++)
	{
		p = (Stu*)malloc(sizeof(Stu));
		p->score = i;
		p->next = head->next;
		head->next = p;
	}
/*
	p = head->next;	
   while(q)
	{
		printf("%d\n",q->score);
		q = q->next;
	}
*/	
// nixu
	Stu *s, *t, *k;
	s = head->next;
	t = s->next;
	s->next = NULL;
	k = t->next;

	while(k != NULL)
	{
		printf("1");
		t->next = s;
		s = t;
		t = k;
		k = k->next;
	}
	t->next = s;
	head->next = t;
	q = head->next; 
	
	while(q)
	{
		printf("%d\n",q->score);
		q = q->next;
	}

	return 0;
}
