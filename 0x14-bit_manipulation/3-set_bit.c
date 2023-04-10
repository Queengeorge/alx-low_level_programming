#include "main.h"

/**
 * set_bit -will set bit of a given index to 1
 * @n:is the  pointer to a number to change
 * @index: index of a bit to set to 1
 *
 * Return: 1 (success), -1 (failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)

		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}

