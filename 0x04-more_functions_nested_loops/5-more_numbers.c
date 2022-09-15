#include "main.h"

/**
* print_most_numbers - a function that prints the numbers, from 0 to 9
*
* Return: 0-9, excluding 2 and 4, followed by new line
*/

void print_most_numbers(void)
{

	int i, j, k, l;

	for (j = 0; j <= 9; j++)

	(

		k = 0

		l = 0

		for (i = 48; i < 63; i++)

		{

			if (!(i > 57))

				l = i;

			else

			{

				l = i - 10;

				k = 49;

				_putchar(k);

			}

			_putchar(l);

		}

		_putchar('\n');

	}

}
