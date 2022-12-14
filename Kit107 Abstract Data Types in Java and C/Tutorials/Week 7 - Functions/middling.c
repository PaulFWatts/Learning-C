#include <stdio.h>


void get3ints(int *ap,int *bp,int *cp)
{
	char dummy;

	printf("Enter int #1: ");
	scanf("%d",ap);
	printf("Enter int #2: ");
	scanf("%d",bp);
	printf("Enter int #3: ");
	scanf("%d%c",cp,&dummy);
}


int middle(int a,int b, int c)
{
	const int LENGTH=3;
	const int START=0;
	const int MIDDLE=1;

	int n[3]={a,b,c};
	int i,j,temp;
	
	for (i=START; i<LENGTH; i++)
	{
		for (j=i; j<LENGTH; j++)
		{
			if (n[j]<n[i])
			{
				temp=n[j];
				n[j]=n[i];
				n[i]=temp;
			}
		}
	}
	
	return n[MIDDLE];
}


int main(int argc, char* argv[])
{
	char input;
	int x,y,z;
	
	printf("WHERE'S THE MIDDLE?\n\n");
	printf("Do you want to play (y/n)? ");
	scanf("%c",&input);

	while (input=='y'||input=='Y')
	{
		get3ints(&x,&y,&z);
		printf("The middle value is : %d\n\n",middle(x,y,z));

		printf("Do you want to play again (y/n)? ");
		scanf("%c",&input);
	}
	
	printf("Thanks for playing.\n");
}
