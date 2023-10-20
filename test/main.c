#include <stdio.h>
#include <limits.h>
#include "main.h"
int main(void)
{
	int len, len2;
	
	len = _printf("let's try to print a simple sentence. \n");
	len2 = printf("let's try to print a simple sentence. \n");


	_printf("Length: [%c, %c]\n", len, len);
	printf("Length: [%d, %i]\n", len2, len2);


	return (0);
}


