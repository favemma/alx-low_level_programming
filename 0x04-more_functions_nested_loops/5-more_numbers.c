#include "main.h"

/**
* print_most_numbers - a function that prints the numbers, from 0 to 9
*
* Return: 0-9, excluding 2 and 4, followed by new line
*/

void print_most_numbers(void)
{

	int i, j;

	for (j = 0; j <= 10; j++)

	{

		for (i = 0; i < 14; i++)

		{

			if (i > 9)

				_putchar((i / 10) + '0');

			{

			_putchar((i % 10) '0');
			
			

		}

		_putchar(10);

	}

}
