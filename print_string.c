#include "main.h"
/**
 * print_string - prints a string.
 * @args: number of arguments.
 * Return: returns the amount of characters printed.
 */
int print_string(va_list args)
{
	int len;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	for (len = 0; str[len] != '\0'; len++)
		_putchar(str[len]);
	return (len);
}
