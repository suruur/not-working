#include <string.h>
#include <stdio.h>
#include "main.h"

int task0(char *str)
{
	int len;

	len = strlen(str);
	printf("sss%d", len);
	puts(str);

	return (len);
}

void task1(int no)
{
	putchar(no + '0');
}

int task2(int b)
{
	int c, mod;
	char bina[1024];

	c = 0;

	while (1)
	{
		
		mod = b % 2;
		bina[c] = mod;
		b /= 2;
		putchar(mod + '0');
		c++;

		if (b == 0)
			break;
	}
	puts(bina);

	return (c);
}
