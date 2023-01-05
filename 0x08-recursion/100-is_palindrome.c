#include "main.h"
/**
 * is_palindrome -  An empty string is a palindrome
 * @s: the string to be returned
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

