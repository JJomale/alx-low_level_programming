#include "main.h"

/**
 * _atoi - convert a string to an int
 * @s: the string to be changed
 *
 * Return: the converted unit
 */
int _atoi(char *s)
{
	int sign = 1;
	int unsign num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return(num * sing);
}
