#include "main.h"
#include <stdlib.h>

/**
 * print_num - print numbers as characters
 * @n: number to be printed
 * Return: number of characters printed
 */

int print_num(int n)
{
	int mini_count = 0;

	if (n < 0)
	{
		n = -n;
		_writeit('-');
		mini_count++;
	}

	mini_count++;

	if (n / 10)
		mini_count += print_num(n / 10);

	_writeit((n % 10) + '0');
	return (mini_count);
}

/**
 * print_char - prints characters
 * @c: inputted character
 * Return: 1 to calling code
 */

int print_char(char c)
{
	_writeit(c);
	return (1);
}

/**
 * print_str - prints inputted string
 * @s: inputted string
 * Return: num of characters printed
 */

int print_str(char *s)
{
	int i, mini_count = 0;

	if (s == NULL)
	{
		_writeit('%');
		_writeit('s');
		mini_count += 2;
	}
	for (i = 0; s[i] != '\0' && s != NULL; i++)
	{
		_writeit(s[i]);
		mini_count++;
	}
	return (mini_count);
}

/**
 * print_etc - prints the full specifier;
 *
 * Return: 2 as total prints
 */

int print_etc(char etc)
{
	_writeit('%');
	_writeit(etc);
	return (2);
}
