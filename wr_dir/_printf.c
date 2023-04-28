#include "main.h"

/**
 * _printf - function that produces****** output according to a format
 * @format: varibale that ***format string containing the characters
 * Return: leng of the form output string
 * Authors:amine mohamed and aicha lahnite
 */
int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, t_flgs *);
	const char *p;
	va_list argst;
	t_flgs flags = {0, 0, 0};

	register int cnt = 0;

	va_start(argst, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				cnt += _putchar('%');
				continue;
			}
			while (getFlags(*p, &flags))
				p++;
			pfunc = getPr(*p);
			cnt += (pfunc)
				? pfunc(argst, &flags)
				: _printf("%%%c", *p);
		} else
			cnt += _putchar(*p);
	}
	_putchar(-1);
	va_end(argst);
	return (cnt);
}