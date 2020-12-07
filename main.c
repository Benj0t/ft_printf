#include <stdlib.h>
#include <stdio.h>
#include "libftprintf.h"
int main()
{
	char *str;
	str = "coucoi";
	printf("\n   PRINTF: %*.3p\n",-12, str);
	ft_printf("\nFT_PRINTF: %*.3p\n",-12, str);
}
