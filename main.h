#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct character_print - print data
 * @c: character.
 * @f_pr: function pointer
 */
typedef struct character_print
{
	char *c;
	int (*f_pr)(va_list arg);
} print_d;


int _printf(const char *format, ...);
int _putchar(char c);
int p_c(va_list args);
int p_s(va_list args);
int per_cent(va_list args __attribute((unused)));

int df(va_list args);
int print_dig(long int len, long int n);
int dcc(va_list args);
int print_dig_u(long int len, long int n);
int bn(va_list args);
int print_binary(long int k, long int n);
#endif 
