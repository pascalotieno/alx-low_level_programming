#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: is the int that will use for the argument of rthe function
 * Return: Always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');

	return (1);

}

	else if (n < 0)

	{

	_putchar('-');
	return (-1);

	}

	else

	{
		_putchar('-');

		return ('0');
	}
}
