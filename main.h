#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * struct character_print - prints the data.
 * @c: character.
 * @func_p: function pointer
 */
typedef struct character_print
{
	char *c;
	int (*func_p)(va_list args);
} prints_d;


int _printf(const char *format, ...);
int _putchar(char c);
int p_c(va_list args);
int p_s(va_list args);
int per_cent(va_list args __attribute((unused)));
int df(va_list args);
int print_dif(long int len, long int n);
int dcc(va_list args);
int print_dig_c(long int len, long int n);
int bn(va_list args);
int print_binary(long int len, long int n);

#endif 
