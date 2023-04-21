#include "main.h"

/* by noguia && smaail-k */

/**
 *_printf - print character
 *@format:  refers to the process of controlling
 *Return: always return 0
 */

int check(va_list list, char c)
{
	if (c == 'c')
		return (_putchar(va_arg(list, int)));
	else if (c == 's')
		return (_putstr(va_arg(list, char *)));
	else if (c == 'd' || c == 'i')
		return (_putnbr(va_arg(list, int)));
	else if (c == 'b')
		return (_tobinary(va_arg(list, long)));
	else if (c == 'x')
		return (_hexa(va_arg(list, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (_hexa(va_arg(list, unsigned int), "0123456789ABCDEF"));
	else if (c == 'p')
	{
		_putstr("0x");
		return (_hexa(va_arg(list, unsigned int), "0123456789abcdef") + 2);
	}
	else if (c == 'u')
		return (_putunbr(va_arg(list, int)));
	else if (c == 'o')
		return (_octal(va_arg(list, int)));
	return (0);
}

int _printf(const char *format, ...)
{
	int			i;
	va_list		args;
	int			count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] != '%')
			count += _putchar(format[i]);
		else
		{
			i++;
			count += do_printf(format[i], args);
		}
		i++;
	}
	va_end(args);
	return (count);
}

