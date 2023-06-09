#include "main.h"

/**
 * get_print - selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @s: character that holds the conversion specifier
 * Description: the function loops through the structs array
 * func_arr[] to find a match between the specifier passed to _printf
 * and the first element of the struct, and then the approriate
 * printing function
 * Return: a pointer to the matching printing function
 */
int (*get_print(char s))(va_list, flags_t *)
{
	ph func_arr[] = {
		{'i', _handelint},
		{'s', _handelstring},
		{'c', _handelchar},
		{'d', _handelint},
		{'u', _handelunsigned},
		{'x', handel_hex},
		{'X', handel_hex_big},
		{'b', _handelbinary},
		{'o', _handeloctal},
		{'R', _handelrot13},
		{'r', _handelrev},
		{'S', _handelbigS},
		{'p', _handeladdress},
		{'%', _handelpercent}
		};
	int flags = 14;

	register int i;

	for (i = 0; i < flags; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);
}
