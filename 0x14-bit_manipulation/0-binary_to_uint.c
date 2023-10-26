#include "main.h"

/**
 * binary_to_uint - Converts a binary to unsigned int
 * @b: The binary number as the string
 *
 * Return: the Converted value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);


	while (*b != '\0')
	{
		if (*b == '0')
		{
			result = result * 2;
		}
		else if (*b == '1')
		{
			result = result * 2 + 1;
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (result);
}
