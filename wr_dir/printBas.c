#include "main.h"

/**
 * printHex - function for prints a number in hexadecimal base,
 * in lowercase
 * @l: varibale for va_list arguments from _printf
 * @f: varibale for pointer to the struct** flags that determines
 * if a flag is passed to _printf
 * Return: the number of char printed
 */
int printHex(va_list l, t_flgs *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 1);
	int cnt = 0;

	if (f->hash == 1 && str[0] != '0')
		cnt += _puts("0x");
	cnt += _puts(str);
	return (cnt);
}

/**
 * printHexBig -function for prints a number in hexadecimal base,
 * in uppercase
 * @l: varibale for va_list arguments from _printf
 * @f: varibale for pointer to the struct that determines
 * if a flag is passed to _printf
 * Return: the number of char printed
 */
int printHexBig(va_list l, t_flgs *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 0);
	int cnt = 0;

	if (f->hash == 1 && str[0] != '0')
		cnt += _puts("0X");
	cnt += _puts(str);
	return (cnt);
}

/**
 * printBin - function for prints a number in base 2
 * @l: varibale for va_list arguments from _printf
 * @f: varibale for pointer to the struct that determines
 * if a flag is passed to _printf
 * Return: the number of char printed
 */
int printBin(va_list l, t_flgs *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 2, 0);

	(void)f;
	return (_puts(str));
}

/**
 * printOct - function for prints a number in base 8
 * @l: varibale for va_list arguments from _printf
 * @f: varibale for pointer to the struct that determines
 * if a flag is passed to _printf
 * Return: the number of char printed
 */
int printOct(va_list l, t_flgs *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 8, 0);
	int cnt = 0;

	if (f->hash == 1 && str[0] != '0')
		cnt += _putchar('0');
	cnt += _puts(str);
	return (cnt);
}