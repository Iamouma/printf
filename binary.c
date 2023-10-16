#include "main.h"
/**
 * bin_int - converts to int
 * @args: argument to take in.
 * Return: number of intergers.
 */
int bin_int(va_list args)
{
	long int len = 1, count = 0;
	long int i = va_arg(args, int), k = i;
	int j = 0;

	if (i == 0)
	{
		_putchar('0');
		return (1);
	}

	while (k > 0)
	{
		count++;
		k = k >> 1;
	}

	len = len << (count - 1);

	for (; count > 0; count--)
	{
		if (i & len)
		{
			_putchar('1');
			j++;
		}
		else
		{
			_putchar('0');
			j++;
		}
		len = len >> 1;
	}
	return (j);
}

/**
 * int_to_bin - converts unsigned int to binary.
 * @num: unsigned int.
 * Return: 0 or 1
 */
int int_to_bin(int num)
{
	unsigned int i;

	i = 0;

	if (num / 2)
		i += int_to_bin(num / 2);

	i += _putchar((num % 2) + '0');

	return (i);
}

/*
 * int_bin - turns int to binary
 * @args: list of arguments.
 * Return: 1
 */
int int_bin(va_list args)
{
	int i = va_arg(args, int);

	return (int_to_bin(i));
}
