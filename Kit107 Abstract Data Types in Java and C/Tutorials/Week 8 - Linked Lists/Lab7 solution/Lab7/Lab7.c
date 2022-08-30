/*
	KIT107 Programming 
	Lab 7: Harness
	
	Author Julian Dermoudy
	Version 22/4/2018
*/

#include "position.h"
#include "team.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	team t;

	init_team(&t);
	/*addPosition(t,6,"GA");/**/
	add_position(t, 1, "GK");
	add_position(t, 3, "WD");
	add_position(t,5, "WA");
	/*add_position(t,4,"C");/**/
	add_position(t, 7, "GS");
	/*add_position(t,2,"GD");/**/

	/*delete_position(t,3);/**/

	printf("%s",team_to_string(t));
	getch();
}
