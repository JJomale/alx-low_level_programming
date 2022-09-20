#include <stdio.h>
#include "main.h"

/**
 * pint_aray - pint n element of array
 * @a: array
 * @n: numbe of elemnet
 * Return: nothing
 */

void prin_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n; inc++)
	{
		if (inc != n -1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);
	}
	putchar(10);
}
