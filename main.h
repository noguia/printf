#ifndef _PRINTF_H
# define _PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <stdio.h>

int	 _octal(unsigned int x);
int		_putchar(char c);
int		_putstr(char *s);
int		_printf(const char *s, ...);
long	 _tobinary(unsigned int x);
char	*_unsigned(unsigned int n);
void	_putnbr(int nb, int *count);
void	_put_unsigned(unsigned int n, int *count);

#endif
