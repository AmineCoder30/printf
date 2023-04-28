#include "main.h"

/**
 * printAdd - the function prints address of the input
 * in hexa format
 * @l: varibale = va_list arguments from _printf
 * @f: varibale = pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int printAdd(va_list l, t_flgs *f)
{
	char *str;
	unsigned long int p = va_arg(l, unsigned long int);

	register int cnt = 0;

	(void)f;

	if (!p)
		return (_puts("(nil)"));
	str = convert(p, 16, 1);
	cnt += _puts("0x");
	cnt += _puts(str);
	return (cnt);
}
