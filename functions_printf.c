#include "main.h"

/**
 * p_c - print character.
 * @args: list of argument
 * Return: 0 if successful.
 */
int p_c(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * per_cent - print percentage.
 * @args: list of arguments.
 * Return: 0 if successful.
 */
int per_cent(va_list args __attribute__((unused)))
{
	_putchar('%');
	return (1);
}

/**
 * p_s - print string
 * @args: list of arguments.
 * Return: the number of characters in string.
 */
int p_s(va_list args)
{
	int i = 0;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}
