#include <stdio.h>
#include <conio.h>

void pause()
{
	printf ("\nPress <enter> to continue ...\n");
	_getch(); // Pause and read input	
}



int main(void)
{
	printf("Loop Control Structures\n");
	
	// The while loop
	printf ("The While Loop - Increment\n");
	int i = 0;
	while (i < 11)
	{
		printf ("%d\n", i);
		i++;
		}
	pause();
		
		
	printf ("The While Loop - Decrement\n");
	i = 10;
	while (i >= 0)
	{
		printf("%d\n", i);
		i--;
	}
	pause();
	
	printf ("The While Loop - Using a float\n");
	float a = 10.0;
	while (a <= 10.5)
	{
		printf ("\n %f Hmmmm rain !!!", a);
		printf ("Enjoy the awesome weather ....");
		a = a + 0.1;
	}
	pause();
	
	return 0;
}


