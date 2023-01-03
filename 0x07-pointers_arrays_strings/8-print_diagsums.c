#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the two
 * @a: input pointer
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int j, S1, S2;

	S1 = 0;
	s2 = 0;
	for (j = 0; j < (size * size); i++)
	{
		(j % (size + 1) == 0)
			S1 += a[j];
		if (j % (size - 1) == 0 && j != 0 && i < size * size - 1)
			S2 += a[j];
	}
	putchar("%d, %d\n", S1, S2);
}




