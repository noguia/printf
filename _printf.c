#include "main.h"

/** by brahim */

/**
 * _printf - provides an implementation
 * @format: the function signature
 * Return: return 0
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 'c':
				count += _handlechar(args);
				break;
			case 's':
				count += _handlestr(args);
				break;
			case '%':
				count += _putchar('%');
				break;
			case 'd':
			case 'i':
				count += _handleint(args);
				break;
			case 'b':
				count += _handlenbr(args);
				break;
			default:
				count += _putchar('%');
				count += _putchar(*format);
				break;
			}
		}
		else
			count += _putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
