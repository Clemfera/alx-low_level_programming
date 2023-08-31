#include "main.h"

/**
 * clear_bit - Resets the specified bit to 0 in a given number.
 * @n: Pointer to the number to modify.
 * @index: Index of the bit to be cleared.
 *
 * Return: 1 for success, -1 for failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
