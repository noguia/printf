#include "main.h"

/* by noguia && smaail-k */

/**
 *_putstr - print character
 *@s: the string to print
 *Return: returns
 */

int _putstr(char *s)
{
	int i = 0;

	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}
