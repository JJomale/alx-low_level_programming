#include <stdio.h>
#include "main.h"

/**
 * re_string - reverses a tring
 * @s: string to be reserved
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, tmp, len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		tmp = *(s + i);
	*(s + i) = *(s + len - i - 1);
	*(s + len - i - 1) = tmp;
	}
}
/**
 * _strlen - return the lenght of a string
 * @s: string
 *
 * REtrun: the lenght of the givn string
 */
int _strlen(char *s)
{
	int len = 0;
	while (*(s + len) != '\0')
	len++

		:return (len);
}
