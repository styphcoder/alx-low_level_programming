#include "main.h"

/**
 * _strlen - return the length of a string.
 * @s: string.
 * Return: lentgh of s
 */
int _strlen(char *s)
{int i = 0;
	while(*s++)
		i++;
	return (i);
}
