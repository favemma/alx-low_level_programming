#include "main.h"
#include <stdio.h>


/**
* _strcat - a function that concatenates two strings
* @dest: copy to
* @src: copy from
* Return: two concat strings
*/

char *_strcat(char *dest, char *src)
{

	int i = 0, dest_len= 0;

	while (dest[i++])
	
		dest_len++;

	for(i = 0; src[i]; i++)

		*dest[dest_len++] = *src[i];

	return (dest);

}
