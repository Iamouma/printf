#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * _printf - produces output according to a format.
 * @format: character string.
 * Return:the formatted string.
 */
int _printf(const char *format, ...)
{
	int hgt = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			hgt = selector(format, args, hgt);
			format++;
		}
		else
		{
			_putchar(*format);
			hgt++;
			format++;
		}
	}
	va_end(args);
	return (hgt);
}
