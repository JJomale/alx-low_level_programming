#include <stdio.h>
/**
 * main - a program that prints the alphabets un lowercase
 * that does not inclue e and q
 *
 * Return: 0
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
