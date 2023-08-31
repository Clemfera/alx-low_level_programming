#include "main.h"

/**
 * get_bit - retrieves the value of bit at specified index in a decimal number
 * @n: the number to examine
 * @index: the index of the bit to retrieve
 *
 * Return: the value of the bit at the given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
