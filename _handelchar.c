#include "main.h"
/**
 * handle_char - handles the case c specifier
 * @args: the argument list to get the char from
 * Return: the number of chars printed
 */
int _handlechar(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
