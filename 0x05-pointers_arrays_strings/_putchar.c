#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main- _putchar print result to stdout
*
*Return: 1 on success
*/

int _putchar(char c)
{

	return (write(1, &c, 1));

}
