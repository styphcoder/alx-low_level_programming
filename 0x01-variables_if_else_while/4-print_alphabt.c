#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
	if (letter == 'e' || letter == 'q')
		continue;
	else
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
