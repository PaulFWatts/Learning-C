#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	int *ip=&i;

	printf("Please enter an integer: ");
	scanf("%d",ip);

	printf("The int you entered was: %d\n",*ip);
	printf("The variable is located at: %p\n",ip);
	printf("The variable is located at: %p\n",&i);
}
