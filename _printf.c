#include "main.h"

void	check_char(va_list list, char c, int *len, int *i)
{
	if (c == 'c')
		*len += put_char(va_arg(list, int));
	else if (c == 'd' || c == 'i')
		*len += put_number(va_arg(list, int));
	else if (c == 'u')
		*len += put_number_u(va_arg(list, unsigned int));
	else if (c == 's')
		*len += put_string(va_arg(list, char *));
	else if (c == 'x')
		*len += putnbr_base(va_arg(list, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		*len += putnbr_base(va_arg(list, unsigned int), "0123456789ABCDEF");
	else if (c == 'p')
	{
		*len += put_string("0x");
		*len += putnbr_base(va_arg(list, unsigned long), "0123456789abcdef");
	}
	else if (c == '%')
		*len += put_char('%');
	else
		(*i)--;
}

int	_printf(const char *str, ...)
{
	va_list	list;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(list, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			check_char(list, str[i], &len, &i);
		}
		else
			len += put_char(str[i]);
		i++;
	}
	va_end(list);
	return (len);
}
