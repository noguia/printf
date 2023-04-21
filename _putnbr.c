#include "main.h"

/* bu noguia && smaail-k */

/**
 *_putnbr - print the nb
 *@n: the n to print
 *Return: returns
 */

int _putnbr(int n)
{
	int c = 0;

	if (n < 0)
	{
		c += _putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		c +=_putnbr(n / 10);
		c += _putnbr(n % 10);
	}
	else
		c += _putchar(n + '0');
	return (c);

}
