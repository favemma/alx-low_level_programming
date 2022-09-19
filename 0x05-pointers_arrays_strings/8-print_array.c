#include "main.h"
#include <stdio.h>

/**
*Print_array _ prints n element of array
*@a: array
@n: number of elements
* Return: nothing
*/

void print_array(int *a, int n)
{

	int inc;

	for (inc = 0; inc < n ; inc++)

	{

		if (inc != n - 1)

			Printf("%d, ", a[inc]);

		else

			printf("%d, ", a[inc]);

	{

	_putchar(10);

}
