#include "main.h"

/**
 * get_endianness -will check if the machine is big or small endian
 *
 * Return: 0 (big), 1 (little)
 */
int get_endianness(void)
{
	unsigned int i = 1;

	char *c = (char *) &i;

	return (*c);
}

