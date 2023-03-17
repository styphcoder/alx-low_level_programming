#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
*/
int main(void)
{
	int n, lst;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 10)
		printf("Last digit of %d is %d  \n", n, n);
	else
	{	lst = n % 10;
		printf("Last digit of %d is %d  \n", n, lst);
	}

	return (0);
}
