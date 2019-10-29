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
	return (1);
}
