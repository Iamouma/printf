#include "main.h"

/**
 * df - collects integer value and calls function to print.
 * @args: list of arguments.
 * Return: length of integer.
 */
int df(va_list args)
{
	long int len = va_arg(args, int);
	long int n;

	n = print_dig(len, 0);

	return (n);
}


/**
 * print_dig - prints signed integers.
 * @len: integer to be printed
 * @n: length of integer to be printed.
 * Return: length of integer.
 */
int print_dig(long int len, long int n)
{
	if (len < 0)
	{
		_putchar('-');
		len = -len;
		n++;
	}
	if (len / 10)
	{
		n = print_dig(len / 10, n++);
	}
	_putchar(len % 10 + '0');
	n++;

	return (n);
}


/**
 * dcc - collects integer value and calls function to print.
 * @args: argument value here int.
 * Return: n length of int.
 */
int dcc(va_list args)
{
	long int len = va_arg(args, int);
	long int n;

	n = print_dig_u(len, 0);

	return (n);
}


/**
 * print_dig_u - prints unsigned integers.
 * @len: integer to be printed
 * @n: length of integer
 * Return: n length of integer.
 */
int print_dig_u(long int len, long int n)
{
	if (len < 0)
	{
		len = -len;
		n++;
	}

	if (len / 10)
	{
		n = print_dig_u(len / 10, n++);
	}
	_putchar(len % 10 + '0');
	n++;

	return (n);
}
