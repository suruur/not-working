#include "main.h"

/**
 * task2 - handle task1
 *
 */
int task2(const char *format, ...)
{
	int i, j;
	va_list args;
	va_start(args, format);
	int count = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'b')
			{
				unsigned int num = va_arg(args, unsigned int);
				char bina[32];
				for (i = 31; i >= 0; i--)
				{
					bina[j++] = (num & (1 << i)) ? '1' : '0';
				}
				bina[j] = '\0';
				puts(s);
				count += j;
			}
			else
			{
				putchar(*format);
				count++;
			}
			
	

		}
		format++;
	}
	va_end(args);
	return (count);
}
