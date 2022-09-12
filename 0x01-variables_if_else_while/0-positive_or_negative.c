#include <stdlid.h>
#include <time.h>
#include <stdio.h>
/**
*main - print if the number is positive, zero, or negative
*
*Description: using the main function 
*this program prints "programming is positive, zero, or negative
*Return 0
*/
int main(void)
{
int n;
int l;

srand(time(0));
n = rand() - RAND_MAX / 2;
l = n % 10;

if (1 > 5)
{
	printf("%l is positive\n", n, l);
}
else if (1 == 0)
{
	printf("%l is zero\n", n, l);
}
else
{
	printf("%l is negative\n", n, l);
}
return (0);
}
