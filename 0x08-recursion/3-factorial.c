#include "main.h"
/**
 * factorial -  returns the factorial of a given number.
 * @n: factorial to be returned
 * Return: if n > 0 -factorial of n
 *if n < 0 -1 factorial error
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
		return (1);
}
