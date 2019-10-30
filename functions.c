#include "holberton.h"

/**
 * print_char - writes the character c to stdout
 * @lst: location of char to be printed
 * Return: On success 1
 */
int print_char(va_list lst)
{
	char c = (char)va_arg(lst, int);

	write(1, &c, 1);

	return (1);
}

/**
 * print_string - this function will print a string
 * @lst: location of string to be printed
 * Return: string
 */
int print_string(va_list lst)
{
	char *ptr = va_arg(lst, char *);
	int counter = 0;

	if (ptr == NULL)
		return (0);

	while (*ptr != '\0')
	{
		write(1, ptr, 1);
		ptr++;
		counter++;
	}
	return (counter);
}

/**
 * print_int - a function that prits an integer
 * @lst: location of what needs to be printed
 * Return: length
 */
int print_int(va_list lst)
{

	int a = va_arg(lst, int);
	int h = 1;
	int j, k;
	int len = 0;

	if (a < 0)
	{
		write(1, "-", 1);
		a = -a;
		len++;
	}
	j = a;
	k = 0;
	while (j > 0)
	{
		j = j / 10;
		k++;
	}
	h = 1;
	while (k > 1)
	{
		h = h * 10;
		k--;
	}
	while (h > 0)
	{
		_putchar(a / h % 10 + '0');
		len++;
		h = h / 10;
	}
	return (len);
}
