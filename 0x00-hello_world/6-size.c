#include <stdio.h>

/**
 * main - print strings in the put function
 *
 * Description: using main function
 *prints the size of various types on the computer it is compiled and run on.
 * Return: 0
 */
int main(void)
{
	char c;
	int l;
	long int ll;
	long long int lll;
	float f;

	printf("size of a char: %d byte(s)\n", sizeof(c));
	printf("size of an int: %d byte(s)\n", sizeof(l));
	printf("size of a long int: %d byte(s)\n", sizeof(ll));
	printf("size of a long long int: %d byte(s)\n", sizeof(lll));
	printf("size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}
