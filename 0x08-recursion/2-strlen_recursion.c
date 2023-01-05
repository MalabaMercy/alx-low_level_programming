#include "main.h"
/**
 * _strlen_recursion - that returns the length of a string.
 * @s: the string to be printed
 * Return: the lenght of the string
 */
int _strlen_recursion(char *s)
{
	int length;

	if (*s)
	{
		length++;
			length += _strlen_recursion(s + 1);
	}
}
