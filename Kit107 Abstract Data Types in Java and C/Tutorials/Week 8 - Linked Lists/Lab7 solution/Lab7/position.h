// KIT107 Tutorial 7: position
/*
 * Specification for the position ADT
 * Author Julian Dermoudy
 * Version 20/4/18
*/

#include <stdbool.h>

struct position_int;
typedef struct position_int *position;

void init_position(position *pp, int num, char *name);
void setNumber(position p, int n);
void setName(position p, char *n);
void setNext(position p1, position p2);
int getNumber(position p);
char *getName(position p);
position getNext(position p);
char *positionToString(position p);