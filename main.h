#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>


/**
 * struct function_s - structure holding an identifier and a function
 * @identifier: character identifying action
 * @print_function: function excecuted when identifier is identified
*/

typedef struct function_s
{
	char *identifier;
	int (*print_function)(va_list args);
} function_t;


int _putchar(char c);
int _printf(const char *format, ...);
int print_Char(va_list args);
int print_string(va_list args);
int per_cent(va_list args __attribute__((unused)));
int print_int(va_list args);
int printi(int i);
int bin_int(va_list args);
int int_to_bin(int num);
int int_bin(va_list args);


#endif
