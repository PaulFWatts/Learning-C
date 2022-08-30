#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	printf("Please enter an integer: ");
	scanf("%d",&i);

	printf("The integer you entered was: %d and its address was %p\n",i,&i);
}
