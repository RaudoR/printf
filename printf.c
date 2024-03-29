#include "holberton.h"

/**
 * _printf - this function will produce an output according to format
 * @format: input
 * Return: length of string
 */

int _printf(const char *format, ...)

{

	va_list lst;
	int alpha = 0, bravo = 0;

	va_start(lst, format);
	if (format == NULL || (format[alpha] == '%' && format[alpha + 1] == '\0'))
	{
		va_end(lst);
		return (-1);
	}
	if (format[alpha] == '\0')
		return (-1);
	while (format[alpha] != '\0')
	{
		if (format[alpha] == '%')
		{
			alpha++;
			if (format[alpha] == 'c')
				bravo += print_char(lst);
			else if (format[alpha] == 's')
				bravo += print_string(lst);
			else if (format[alpha] == 'd' || format[alpha] == 'i')
				bravo += print_int(lst);
			else if (format[alpha] == '%')
			{
				write(1, "%", 1);
				bravo++;
			}
			else
				write(1, &format[alpha - 1], 2);
		}
		else
		{
			bravo++;
			write(1, &format[alpha], 1);
		}
		alpha++;
	}
	va_end(lst);
	return (bravo);
}
