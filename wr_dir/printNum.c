#include "main.h"

/**
 * printInt - prints an integer function
 * @l: varibale for va_list of arguments from _printf
 * @f: varibale for pointer to the struct flags determining
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int printInt(va_list l, t_flgs *f)
{
	int n = va_arg(l, int);
	int res = countDigit(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		res += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		res += _putchar('+');
	if (n <= 0)
		res++;
	printNum(n);
	return (res);
}

/**
 * printNum - prints an unsigned integer function
 * @l: varibale for va_list of arguments from _printf
 * @f: varibale for pointer to the struct flags determining
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int printUnNum(va_list l, t_flgs *f)
{
	unsigned int u = va_arg(l, unsigned int);
	char *str = convert(u, 10, 0);

	(void)f;
	return (_puts(str));
}

/**
 * printNum -  function that loops through==helper
 * an integer and prints all its digits
 * @n: varibale for integer to be printed
 */
void printNum(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n1 / 10)
		printNum(n1 / 10);
	_putchar((n1 % 10) + '0');
}

/**
 * countDigit - functin for returns the number of digits in an integer
 * for _printf
 * @i: varibale for integer to evaluate
 * Return: number of digits
 */
int countDigit(int i)
{
	unsigned int d = 0;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = i;
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}
