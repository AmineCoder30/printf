#include "main.h"

/**
 * printBigS - function for Non printable characters
 * @l: va for va_list arguments from _printf
 * @f: varibale for pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int printBigS(va_list l, t_flgs *f)
{
	int i, cnt = 0;
	char *res;
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
		return (_puts("(null)"));

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			cnt += 2;
			res = convert(s[i], 16, 0);
			if (!res[1])
				cnt += _putchar('0');
			cnt += _puts(res);
		}
		else
			cnt += _putchar(s[i]);
	}
	return (cnt);
}

/**
 * printRev - function for prints a string in reverse
 * @l: varibale for argument from _printf
 * @f: varibale for pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: length of the printed string
 */
int printRev(va_list l, t_flgs *f)
{
	int i = 0, j;
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
		s = "(null)";

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
}

/**
 * printRot13 - function for prints a string using rot13
 * @l:varibale for list of arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: length of the printed string
 */
int printRot13(va_list l, t_flgs *f)
{
	int i, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(l, char *);

	(void)f;
	for (j = 0; s[j]; j++)
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			_putchar(s[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[j] == rot13[i])
					_putchar(ROT13[i]);
			}
		}
	}

	return (j);
}

/**
 * printPer - function for prints a percent
 * @l: varibale for va_list arguments from _printf
 * @f: pointer to the struct flags in which we turn the flags on
 * Return: number of char printed
 */
int printPer(va_list l, t_flgs *f)
{
	(void)l;
	(void)f;
	return (_putchar('%'));
}