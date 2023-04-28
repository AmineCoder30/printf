#include "main.h"

/**
 * printStr -function that loops through a string and prints
 * every character
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int printStr(va_list l, t_flgs *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * printChar - functio for prints a character
 * @l: varibale for va_list arguments from _printf
 * @f: varibale for pointer to the struct*** flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int printChar(va_list l, t_flgs *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
