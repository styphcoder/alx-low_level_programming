#include "main.h"

/**
 * swap_int - Swap the value of two integers.
 * @a : first number.
 * @b : second number.
 */
void swap_int(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}
