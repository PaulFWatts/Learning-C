// KIT107 Tutorial 7: position
/*
* Implementation for position
* Author Julian Dermoudy
* Version 20/4/18
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "position.h"


struct position_int {
	int number;
	char *name;
	position next;
};

/*
* 'Constructor' for position
*/
void init_position(position *pp,int num,char *name)
{
	*pp = (position)malloc(sizeof(struct position_int));
	(*pp)->number = num;
	(*pp)->name = name;
	(*pp)->next = NULL;
}

/*
* Getter for number
* Return number field
*/
int getNumber(position p)
{
	return (p->number);
}

/*
* Getter for name
* Return name field
*/
char *getName(position p)
{
	return (p->name);
}

/*
* Getter for next
* Return next field
*/
position getNext(position p)
{
	return (p->next);
}

/*
* Setter for number
* Param n value to be placed into the position's number field
*/
void setNumber(position p,int n)
{
	p->number = n;
}

/*
* Setter for name
* Param n value to be placed into the position's name field
*/
void setName(position p,char *n)
{
	p->name = n;
}

/*
* Setter for next
* Param p2 value to be placed into the position's next field
*/
void setNext(position p1, position p2)
{
	p1->next = p2;
}

/*
* Display function for position
*/
char *positionToString(position p)
{
	char *r;

	r=(char *)malloc(6*sizeof(char));
	sprintf(r,"%d. %s",p->number,p->name);

	return r;
}