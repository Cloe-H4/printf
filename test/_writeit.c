#include "main.h"
#include <unistd.h>

/**
 * _writeit - prints character to output.
 * @c: inputted character
 *
 * Return: 1 on success and -1 on error
 */

int _writeit(char c)
{
	return (write(1, &c, 1));
}
