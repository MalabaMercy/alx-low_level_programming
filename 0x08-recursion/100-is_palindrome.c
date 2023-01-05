#include "main.h"
/**
 * is_palindrome -  An empty string is a palindrome
 * @s: the string to be returned
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s)
	{
		return (1);
	}
	else
		return (0);
}

