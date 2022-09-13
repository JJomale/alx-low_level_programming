#include <stdio.h>
/**
 * main - print number from 0 to 10
 * with commas and spaces
 *
 * DESCRIPTION: using the main function
 * this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
 * Retrun: 0
 *
 */

int  main(void)
{
	char k;

	for (k = '0'; k <= '9'; k++)
	{
		putchar(k);
	}
	for (k = 'a'; k <= 'f'; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
