#include "main.h"

/**
* _strcat - a function that concatenates two strings
* @dest: copy to
* @src: copy from
* Return: two concat strings
*/

char *_strcat(char *dest, char *src)
{

	_putchar("Concatenated String: %s\n", strcat(*dest,*src));

	return 0;

}
