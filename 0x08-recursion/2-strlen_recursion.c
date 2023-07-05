#include"main.h"

/**
 * _strlen_recursion - Calculate the length of string
 * @s: the string to ount
 * Return: Integer value
 */

int _strlen_recursion(chae *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
