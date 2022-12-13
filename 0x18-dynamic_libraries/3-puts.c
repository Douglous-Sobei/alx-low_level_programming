#include "main.h"

/**
 * _puts - prints to string
 * @str: Strin to print
 * Return: Nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
