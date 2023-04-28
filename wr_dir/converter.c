#include "main.h"

/**
 * convert - funtion thatconverts number into string
 * @number: varibale = input number
 * @bas: varibale = input base
 * @lcase:varibale = flag if hexa values need to be lowercase
 * Return: result string
 * Authors: amine mohamed and aicha
 */
char *convert(unsigned long int number, int bas, int lcase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lcase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[number % bas];
		number /= bas;
	} while (number != 0);

	return (ptr);
}
