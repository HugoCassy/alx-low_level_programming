#include "main.h"
/**
 * print_number - print an int
 * @n: variable int
 * Return: 0;
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar('0' + (n % 10));
}
