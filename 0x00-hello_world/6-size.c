#include <stdio.h>

/**
 * main - print strings in the put function
 *
 * Description: using main function
 * program to prints the size of various types on the computer it is compiled and run on.
 * Return: 0
 */
int main(void)
{
	char c;
	int 1;
	long 11;
	long long 111;
	float f;

	printf("size of a char: %lb byte(s)\n", sizeof(c));
	printf("size of an int: %lb byte(s)\n", sizeof(1));
	printf("size of a long int: %lb byte(s)\n", sizeof(11));
        printf("size of a long long int: %lb byte(s)\n", sizeof(111));
        printf("size of a float: %lb byte(s)\n", sizeof(f));
	return (0);
}
