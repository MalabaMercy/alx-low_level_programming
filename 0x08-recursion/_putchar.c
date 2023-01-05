#include "main.h"
#include <unstdio.h>
/**
 * _putchar - writes acharacter c to stdout
 * @c: the character to print
 *
 * Return: o
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
