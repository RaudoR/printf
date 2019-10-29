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
	while (format[alpha] != '\0')
	{
		if (format[alpha] == '%')
		{
			alpha++;
			while (format[alpha] == ' ')
				alpha++;
			switch (format[alpha])
			{

			case 'c':
				bravo += print_char(lst);
				break;
			case 's':
				bravo += print_string(lst);
				break;
			case '%':
				write(1, "%", 1);
				break;
			}
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
