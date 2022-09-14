#include "main.h"
#include "1-main.c"
#include "_putchar.c"
/**
* print_alphabet - Entry point
* Description: a function that prints the alphabet,
* in lowecase followed by a new line
* Return: void
*/

void print_alphabet(void)
{

	char letter = 'a';

	while (letter <= 'z')

	{

		_putchar(letter);

		letter++;

	}

	_putchar('\n');

}
