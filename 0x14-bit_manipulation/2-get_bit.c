#include "main.h"

/**
 * get_bit - will return a value of the bit at index in decimal number
 * @n: will be the number to search for
 * @index: index of a bit
 *
 * Return: value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)

		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

