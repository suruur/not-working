#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * _printf - printf function
 * @format: para 1
 * @: format
 * Return: number of format
 */

int _printf(const char *format, ...)
{
	int chars_count, i, j;
	va_list args;

	va_start(args, format);
	chars_count = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			if (format[i] == 'd' || format[i] == 'i')
			{
				j = va_arg(args, int);
				putchar(j);
				chars_count++;
			}
			else
			{
				putchar('%');
				putchar(format[i]);
				chars_count += 2;
			}
		}
		else
		{
			putchar(format[i]);
			chars_count++;
		}
	}

	va_end(args);

	return (chars_count);
}
