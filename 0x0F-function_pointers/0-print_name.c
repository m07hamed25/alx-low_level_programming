#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: the string
 * @f: the printing fun
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
