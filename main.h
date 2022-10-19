#ifndef _HEADER_FILE_
#define _HEADER_FILE_

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/*utils.c */
int _strlen(const char *);
int print(char *);
char *itoa(long int, int);

/*_putchar.c*/
int _putchar(char);
int buffer(char);

/*printf.c*/
int _printf(const char *format, ...);

/*handler.c */
int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

/* printers */
int print_string(va_list);
int print_char(va_list);
int print_integer(va_list);
int print_binary(va_list);
int print_rot(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_hexadecimal_low(va_list);
int print_hexadecimal_upp(va_list);
int print_pointer(va_list);
int print_rev_string(va_list);

/**
 * struct _format- Typedef struct
 *
 * @type: Format
 * @f: The function associated
 */

typedef struct _format
{
	char type;
	int (*f)(va_list);
}format;

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(char *);
int print_decimal(int value);
long long int power(int base, int x);
long long convertToDecimal(int Number, int base);
int print_binary(int number);
int print_unsigned(unsigned int number);

#endif
