#include "main.h"

/**
* _strcat - a function that concatenates two strings
* @dest: copy to
* @src: copy from
* Return: two concat strings
*/

char *_strcat(char *dest, char *src)
{

	int i, n;

	i = strlen(*dest);

	for (j = 0; *src[j] != '\0'; i++, j++) {

		*dest[i] = *src[j];

	}

	*dest[i] = '\0';

}
