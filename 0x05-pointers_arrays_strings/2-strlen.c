#include "main.h"

/**
 * _strlen - returns the l
 * @s: string to e
 *
 * Return: the length o
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
