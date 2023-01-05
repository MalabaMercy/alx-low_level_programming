#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the square root
 * Return: returns the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	int c;

	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + (n, c + 1));
}

