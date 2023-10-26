#include "main.h"

/**
 * get_bit - Get the value of a bit at the given index
 * @n: The number
 * @index: index starting from 0 of the bit required
 *
 * Return: The converted value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int ck;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	ck = 1UL << index;

	return ((n & ck) ? 1 : 0);
}

