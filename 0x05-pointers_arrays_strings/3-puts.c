#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The strint to be printed.
 */
void _putchar(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
