#include "main.h"

/**
 * _isupper - Checks if a char is uppercase.
 *
 *@c: character to check
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
