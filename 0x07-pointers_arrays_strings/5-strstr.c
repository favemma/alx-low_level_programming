nclude <stdio.h>
#include "main.h"

/**
* _strstr - Entry point
* @haystack: input
* @needle: input
* Return: Always 0 (Success)
*/

char *_strstr(char *haystack, char *needle)
{

	char *startn = needle, *starth = haystack;

	while (*haystack)

	{

		starth = haystack;

		needle = startn;

		while (*haystack == *needle)

		{

			haystack++;

			needle++;

		}

	if (*needle == '\0')

		return (haystack);

		haystack = starth + 1;

	}

	return (NULL);

}
