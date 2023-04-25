#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * Group project: noguia & smaail-k
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printHandler - struct to choose the right function depending
 * on ithe format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;

/* _handelnums */
int _handelint(va_list l, flags_t *f);
void _handelnumber(int n);
int _handelunsigned(va_list l, flags_t *f);
int count_digit(int i);

/* _handelbases */
int	 handel_hex(va_list l, flags_t *f);
int	 handel_hex_big(va_list l, flags_t *f);
int	 _handelbinary(va_list l, flags_t *f);
int	 handel_octal(va_list l, flags_t *f);

/* converter */
char *convert(unsigned long int num, int base, int lowercase);

/* _printf */
int _printf(const char *format, ...);

/* get_print */
int (*get_print(char s))(va_list, flags_t *);

/* get_flag */
int get_flag(char s, flags_t *f);

/* _handelalpha */
int _handelstring(va_list l, flags_t *f);
int _handelchar(va_list l, flags_t *f);

/* write_funcs */
int _putchar(char c);
int _puts(char *str);

/* _handelcustom */
int _handelrot13(va_list l, flags_t *f);
int _handelrev(va_list l, flags_t *f);
int _handelbigS(va_list l, flags_t *f);

/* _handeladdress */
int _handeladdress(va_list l, flags_t *f);

/* _handelpercent */
int _handelpercent(va_list l, flags_t *f);

#endif
