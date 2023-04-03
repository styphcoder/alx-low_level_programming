#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: the string to look into.
 * @c: searched character.
 * Return: new string.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
