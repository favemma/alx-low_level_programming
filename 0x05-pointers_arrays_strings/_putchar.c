#include "main.h"
#include <stdio.h>

/**
* _putchar - print c to stdout
*@c : this is the character to print
*
*Return: 1 on success
*on fail -i
*/

int _putchar(char c)
{

	return (write(1, &c, 1));

}
