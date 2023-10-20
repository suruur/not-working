#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "main.h"



int _printf(const char *format, ...)
{
	int i, count, num;
	va_list args;
	char *str;
	char *s;
	int c, bi;

	str = (char *)format;
	va_start(args, format);
	count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '%')
		{
			if (str[i + 1] != '\0')
			{
				switch(str[i + 1])
				{
					case 'c':
						{
							c = va_arg(args, int);
							task1(c);
							count++;
							break;
						}
					case 's':
						{
							str = va_arg(args, char *);
							count += strlen(str);
							puts(str);
							break;
						}
					case '%':
						{
							putchar(str[i + 1]);
							count++;
							break;
						}
					case 'd':
						{
							c = va_arg(args, int);
							task1(c);
							count++;
							break;
						}
					case 'i':
						{
							c = va_arg(args, int);
							task1(c);
							count++;
							break;
						}
					case 'b':
						{
							c = va_arg(args, int);
							count += task2(c);
							break;
						}
					default:
						{
						}
				}
			}
			i++;
		}
		else
		{
			putchar(str[i]);
			count++;
		}
	}
	va_end(args);

	return (count);
}
