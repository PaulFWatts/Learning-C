#include <stdio.h>

int main(void)
{
	int arr[5] = {10, 20, 30, 40, 50};
	int* p = arr; /* the same as int* p = &arr[0]; */
	p += 2;
	printf("The pointed-to value is: %d.\n", *p);
}