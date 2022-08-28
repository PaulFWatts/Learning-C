// KIT107 Tutorial 7: team
/*
 * Implementation for team using linked-list
 * Author <<YOUR NAME HERE>>
 * Version <<DATE>>>
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "position.h"
#include "team.h"

struct team_int {
	position firstPos;
};

/*
 * 'Constructor' for team
 */
void init_team(team *tp)
{
	*tp=(team)malloc(sizeof(struct team_int));
	(*tp)->firstPos=NULL;
}

/*
 * Check for emptiness
 * Return true if team is empty, false otherwise
*/
bool isEmpty(team t)
{
	return (t->firstPos == NULL);
}

/*
 * Add position to end of team
 * Param p position to add to team
*/
void add_position(team t, int num, char *name)
{
	position c;
	position n;

	//create new position
	init_position(&n, num, name);

	if (isEmpty(t))  // no values so new one will be it
	{
		t->firstPos = n;
	}
	else // existing list, find the end of it
	{
		c = t->firstPos;
		while (getNext(c) != NULL) // move to last one
		{
			c = getNext(c);
		}
		// link in new position
		setNext(c,n);
	}
}

/*
 * Add position to team in order
 * Param p position to add to team
*/
void add_positionV2(team t, int num, char *name)
{
	position b,c;
	position n;

	//create new position
	init_position(&n, num, name);

	if (isEmpty(t))  // no values so new one will be it
	{
		t->firstPos = n;
	}
	else 
	{
		b = NULL;
		c = t->firstPos;
		while ((c != NULL) && (getNumber(c) < getNumber(n)))
		{
			b = c;
			c = getNext(c);
		}

		if (b == NULL)
		{
			t->firstPos = n;
		}
		else
		{
			setNext(b,n);
		}
		setNext(n,c);
	}
}

/*
 * Remove nominated position from team
 * Param n position number to be removed
*/
void delete_position(team t,int n)
{
	position b,c;

	if (! isEmpty(t))
	{
		b = NULL;
		c = t->firstPos;
		while ((c != NULL) && (getNumber(c) < n))
		{
			b = c;
			c = getNext(c);
		}

		if ((c != NULL) && (getNumber(c) == n))
		{
			if (b == NULL)
			{
				t->firstPos = getNext(c);
			}
			else
			{
				setNext(b,getNext(c));
			}
		}
	}
}

/*
 * Find printable form of team
 * Return String form of team for printing etc.
 */
char *team_to_string(team t)
{
	position c;
	char *s=(char *)malloc(50*sizeof(char));
	
	s[0] = '\0';
	if (! isEmpty(t))
	{
		c = t->firstPos;
		while (c != NULL)
		{
			sprintf(s, "%s%s\n", s, positionToString(c));
			c = getNext(c);
		}
	}
	return s;
}
