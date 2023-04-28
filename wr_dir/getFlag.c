#include "main.h"

/**
 * getFlags - function tahat turns on flags if the  _printf finds
 * *******a flag modifier in the format string
 * @s: varibale = character that holds the flag specifier
 * @f: varibales = pointer to the struct flags in which we turn the flags on
 *
 * Return: 1 if a flag has been turned on, 0 otherwise
 * Authors: amine mohamed and aicha lahnite
 */
int getFlags(char s, t_flgs *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
