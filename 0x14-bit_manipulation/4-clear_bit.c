#include "main.h"

/**
 * clear_bit - will set a value of the given bit to 0
 * @n: is a pointer to a number to change
 * @index:is the index of a bit to be cleared
 *
 * Return: 1 (success), -1 (failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)

		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}

