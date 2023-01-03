#include "main.h"
#include<stdio.h>
/**
 *_memset -  function that fills memory with a constant byte
 *@s: input pointer to char type
 *@b: input variable of char type
 *@n: unsigned int variable
 * Return: A pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0;j < n; j++)
		s[j] = b;

	return (s);
}
