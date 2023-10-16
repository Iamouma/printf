#include "main.h"
/**
 * print_Char - prints a character.
 * @args: list of arguments.
 * Return: 1 success.
 */
int print_Char(va_list args)
{
	char c;

	c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * print_string - prints a string.
 * @args: list of arguments.
 * Return: number of characters in string.
 */
int print_string(va_list args)
{
	int len = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (str[len])
	{
		_putchar(str[len]);
		len++;
	}
	return (len);
}

/**
 * per_cent - prints a percentage.
 * @args: list of arguments.
 * Return: 0 Successful
 */
int per_cent(va_list args __attribute__((unused)))
{
	_putchar('%');
	return (1);
}

/**
 * print_int - prints integers.
 * @args: list of arguments.
 * Return: 1 Successful.
 */
int print_int(va_list args)
{
	int j = va_arg(args, int);

	return (printi(j));
}

/**
 * printi - prints integers.
 * @i: integer.
 * Return: 1
 */
int printi(int i)
{
	unsigned int len;
	int num  = 0;

	if (i < 0)
	{
		num += _putchar('-');

		len = 1 * -1;
	}
	else
	{
		len = i;
	}

	if (len >= 10)
		num += printi(len / 10);

	num += _putchar((len % 10) + '0');

	return (num);
}
