#include "main.h"

/**
* _strcat - a function that concatenates two strings
* @dest: copy to
* @src: copy from
* Return: two concat strings
*/

char *_strcat(char *dest, char *src)
{

	int i, j;

	i = strlen(*dest);

	for (j = 0; *src[j] != '\0'; i++, j++) {

		*dest[i] = *src[j];

	}

	*dest[i] = '\0';

}

/**

* _strlen - a function that returns the length of a string

* @s: char input

* Return: length of the input string

*/

int _strlen(char *s)
{

	int i = 1, sum = 0;

	char pl = s[0];

	while (pl != '\0')

	{

	sum++;

	pl = s[i++];

	}

	return (sum);

}
