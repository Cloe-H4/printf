#include <stdlib.h>
#include "main.h"

/**
 * check_display - display inputted chararcters according to the format.
 * @c: inputted character
 * de_list: listed format inputs
 * Return: number of printed characters
 */

int check_display(char c, va_list de_list)
{
	int printlen = 0, num = 0;

	switch (c)
	{
		case 'c':
			num = print_char(va_arg(de_list, int));
			break;
		case 's':
			num = print_str(va_arg(de_list, char *));
			break;
		case 'i':
			num = print_num(va_Arg(de_list, int));
			break;
		case 'd':
			num = print_num(va_arg(de_list, int));
			break;
		case '%':
			num = print_char(c);
			break;
		default:
			num = print_etc(c);
	}
	printlen += num;
	return (printlen);
}
