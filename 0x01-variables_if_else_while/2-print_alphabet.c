#include <sdtio.h>
/**
 * main - program that print the alphabets in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char ch;
	
	for (ch = 'n' ; ch = 'z' ; ch++)
	{
		pustchar(ch);
	}
	putchar('\n');
	return (0);
}
