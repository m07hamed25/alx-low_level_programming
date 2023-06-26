#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: the frist integer
 * @b: the second integer
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
