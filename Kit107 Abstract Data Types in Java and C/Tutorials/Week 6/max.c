#include <stdio.h>

#define LENGTH 10

int main(int argc, char *argv[])
{
	int nums[LENGTH];
	int max;
	int i;

	for (i=0; i<LENGTH; i++)
	{
		printf("Enter number %d (of %d): ",i+1,LENGTH);
		scanf_s("%d",&(nums[i]));
	}

	max=nums[0];
	for (i=1; i<LENGTH; i++)
	{
		if (nums[i] > max)
		{
			max=nums[i];
		}
	}

	printf("Maximum is: %d\n",max);
}
