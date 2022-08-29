// KIT107 Tutorial 7: team
/*
 * Specification for the team ADT
 * Author Julian Dermoudy
 * Version 20/4/17
*/

#include <stdbool.h>
#include "position.h"

struct team_int;
typedef struct team_int *team;

void init_team(team *tp);
bool is_empty(team t);
void add_position(team t, int num, char *name);
void remove_position(team t, int n);
char *team_to_string(team t);