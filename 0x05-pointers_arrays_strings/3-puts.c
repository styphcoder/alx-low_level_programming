#include "main.h"

/**
 * _puts - Print a string to stdout.
 * @str: The string to print.
 *
 */
void _puts(char *str)
{
	while (*str)
	_putchar(*str++);
	_putchar("\n");
}
