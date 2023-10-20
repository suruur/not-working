#include "main.h"
#include <stdio.h>
int main(void)
{
	int len, len2;

	len = printf("%s", "SSSSS\n");
	len2 =  _printf("%s", "SSSSS\n");

	printf("Length: [%d, %i]\n", len, len);
	_printf("Length: [%d, %i]\n", len2, len2);

	return (0);

}
