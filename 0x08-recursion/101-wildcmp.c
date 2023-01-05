#include "main.h"
/**
 * wildcmp - a function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
