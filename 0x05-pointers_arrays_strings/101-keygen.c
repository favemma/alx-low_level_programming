#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* main - Entrypoint
*
* Return: generated passwords
*/

int main(void)
{

	char c;

	int x;

	srand(time(0));

	while (x <= 2645)

	{

		c = rand() % 128;

		x += c;

		_putchar(c);

	}

	_putchar(2772 - x)

	return (0);

}

