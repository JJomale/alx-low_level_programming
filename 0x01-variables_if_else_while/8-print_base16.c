#include <stdio.h>
/**
 * main - a program to print number from 0 to 10 with commas and spaces between them
 * Description: using the main function
 * this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
 * Retrun: 0
 */
int main(void)
{
	char k

	for  (k = 0; k <=9; k++)
	{
		putchar(k);
		if (k !=9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
