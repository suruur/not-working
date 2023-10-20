#include <stdio.h>
#include <stdarg.h>
#include "main.h"

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
		if (format[i] == '%')
		{
			i++;
			if (i !='\0')
			{
			switch (format[i])
			{
				case 'c':
					{
						int c = va_arg(args, int);

						putchar(c);
						chars_count++;
						break;
					}
				case 's':
					{
						const char *str = va_arg(args, const char *);

						for (j = 0; str[j] != '\0'; j++)
						{
							putchar(str[j]);
							chars_count++;
						}
						break;
					}
				case '%':
					{
						putchar('%');
						chars_count++;
						break;
					}
				case 'i':
					{
						int it = va_arg(args, int);

						putchar(it);
						chars_count++;
						break;
					}
				case 'd':
					{
						int dd = va_arg(args, int);

						putchar(dd);
					
						chars_count++;
						break;
					}
				case 'b':
					{
						break;
					}
				default:
					{
						putchar('%');
						//putchar(format[i]);
						chars_count++;
					}
			}
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
