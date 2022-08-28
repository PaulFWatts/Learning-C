/* Class average program with counter-controlled reptition*/

#include <stdio.h>

int main(void)
{
	int counter; /* number of grades to be entered next*/
	int grade; /* grade value entered by user*/
	int total; /* total of all grades entered*/
	int average; /* average of all grades entered*/
	
	/* initilisation phase */
	total = 0; /* initialise total to 0 */
	counter = 1; /* initialise counter to 1*/
	
	/* processing phase */
	while (counter <= 10) /* loop 10 times*/
	{
		printf("Enter grade %d: ", counter);
		scanf("%d", &grade); /* read in the grade*/
		total = total + grade; /* add grade to total*/
		counter = counter + 1; /* increment counter*/
	}
	
	





	
	return 0;
}