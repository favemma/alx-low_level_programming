#include "main.h"
#include <stdio.h>

/**
* main - derefencing pointers
*
* Return: Always 0.
*/

void reset_to_98(int *n)
{

	int n;

	int *p;

	n = 402;

	p = &n;

	printf("Value of 'n': %d\n", n);

	printf("Address of 'n': %p\n", &n);

	printf("Value of 'p': %p\n", p);

	*p = 402;

	printf("Value of 'n': %d\n", n);

	return (0);

}
