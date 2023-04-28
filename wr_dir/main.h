#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags - flags to "turn on"
 * if flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 * author:
 * amine mohamed
 * aicha lahnite
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} t_flgs;

/**
 * struct printHandler - this **struct for **choose the right fun depending
 * ***************on the forma*****specifier passed to _printf()
 * @c: *****format specifier
 * @f: ****pointer to the correct printing function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, t_flgs *f);
} ph;

/* function exist in printNums */
int printInt(va_list l, t_flgs *f);
void printNum(int n);
int printUnNum(va_list l, t_flgs *f);
int countDigit(int i);

/* function exist in printBases file */
int printHex(va_list l, t_flgs *f);
int printHexBig(va_list l, t_flgs *f);
int printBin(va_list l, t_flgs *f);
int printOct(va_list l, t_flgs *f);

/* converter function */
char *convert(unsigned long int number, int bas, int lcase);

/* _printf function */
int _printf(const char *format, ...);

/* getPr function */
int (*getPr(char s))(va_list, t_flgs *);

/* getFlags */
int getFlags(char s, t_flgs *f);

/* functions exist in printAlpha */
int printStr(va_list l, t_flgs *f);
int printChar(va_list l, t_flgs *f);

/* functions exist in writeFuncs */
int _putchar(char c);
int _puts(char *str);

/* functions exist in printCustom file */
int printRot13(va_list l, t_flgs *f);
int printRev(va_list l, t_flgs *f);
int printBigS(va_list l, t_flgs *f);

/* printAdd function*/
int printAdd(va_list l, t_flgs *f);

/* printPer function */
int printPer(va_list l, t_flgs *f);

#endif
