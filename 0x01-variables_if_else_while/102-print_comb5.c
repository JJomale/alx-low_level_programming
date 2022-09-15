#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_k;
	int second_k;
	
	for (first_k = 0; first_k <= 99; first_k++)
	{
		for (second_k = first_k + 1; second_k <= 99; second_k++)
		{
			putchar(first_k / 10 + '0');
			putchar(first_k % 10 + '0');
			putchar(' ');
			putchar(second_k / 10 + '0');
			putchar(second_k % 10 + '0');
			if (first_k < 98 || second_k < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
