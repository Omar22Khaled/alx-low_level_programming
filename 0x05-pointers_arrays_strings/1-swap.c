#include <stdio.h>

/**
 * swap_int - swa
 * @a: pointer to
 * @b: pointer to
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
