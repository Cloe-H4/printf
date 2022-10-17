#include "main.h"
#include "stdlib.h"
#include "stdarg.h"

/**
 * _printf - prints a string with the right formats.
 * @format: the inputted string containing the format information.
 * @...: the right format results
 *
 * Return: the number of characters printed.
 */

int _printf(const char *format, ...)
{
	int i, mini_count, count = 0;
	va_list de_list;

	if (format == NULL)
		return (-1);

	va_start(de_list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			mini_count = check_display(format[i + 1], de_list);
			count += mini_count;
			++i;
		}
		else
		{
			_writeit(format[i]);
			count++;
		}
	}
	va_end(de_list);
	return (count);
}
