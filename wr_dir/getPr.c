#include "main.h"

/**
 * getPr - selects the right printing function
 * depending on the conversion specifier passed to _printf
 * @s: varibale = character that holds the conversion specifier
 * Description: select the function that will be excuted
 * Return: a pointer to the matching printing function
 * Authors:amine mohamed and aicha lahnite
 */
int (*getPr(char s))(va_list, t_flgs *)
{
	ph functions_arr[] = {
		{'i', printInt},
		{'s', printStr},
		{'c', printChar},
		{'d', printInt},
		{'u', printUnNum},
		{'x', printHex},
		{'X', printHexBig},
		{'b', printBin},
		{'o', printOct},
		{'R', printRot13},
		{'r', printRev},
		{'S', printBigS},
		{'p', printAdd},
		{'%', printPer}
		};
	int flags = 14;

	register int i;

	for (i = 0; i < flags; i++)
		if (functions_arr[i].c == s)
			return (functions_arr[i].f);
	return (NULL);
}
