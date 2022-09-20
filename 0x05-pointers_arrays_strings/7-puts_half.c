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

/**
* _sstrlen - returns the length of a string
* @s:  string
*
* Returns: the length of the given string
*/
int _strlen(char *s)
{

	int len = 0;

	while (*(s + len) != '\0')

		len++;

	return (len);

}

