#include <stdio.h>
/**
 * main - program that prints all possible combinations
 * Description: using the main function
 * this program print "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 0; c <= 10; c++)
	{
		putchar(c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
