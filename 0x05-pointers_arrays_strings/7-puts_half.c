#include "main.h"

/**
* puts_half - a function that prints half of a string
* if odd len, n = (length_of_the_string - 1) / 2
* @str: input
* Return: half of input
*/

void puts_half(char *str)
{

	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)

		_putchar(*(str + i));

	_putchar(10);

	_putchar('\n');

}
