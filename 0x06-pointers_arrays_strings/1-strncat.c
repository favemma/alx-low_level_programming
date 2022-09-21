#include "main.h"
#include <stdio.h>


/**
* _strncat - a function that concatenates two strings but add imputted byte
* @dest: copy to
* @src: copy from
*@n: integer parameter to compare index to
* Return: two concat strings
*/

char *_strncat(char *dest, char *src, int n)
{

	int i = 0, dest_len = 0;

	while (dest[i++])

	dest_len++;

	for (i = 0; src[i] && i < n; i++)

		dest[dest_len++] = src[i];

	src[i] = '\0';

	return (dest);

}
