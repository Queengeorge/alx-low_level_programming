#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -checks if a number is positive, zero or negative.
 *
 * Return: Always 0 
 */
int main(void)
{
		int i;

			srand(time(0));
				i = rand() - RAND_MAX / 2;
				if (i > 0)
				{
					printf("%d is positive\n", i);

				}
				else if (i == 0)
				{
					printf("%d is zero\n", n);
				}
				else
				{
					printf("%d is negative\n", n);
				}
				return (0);

}
