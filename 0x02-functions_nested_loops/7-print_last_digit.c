#include "main.h"
/**
 * print_last_digit - function that prints the last digit
 * @s: takes ln an integer
 * Return: returns output
 */
int print_last_digit(int s)
{
	int ld = s % 10;

	if (s < 0)
		ld = ld * -1;
	_putchar(ld + '0');
	return (ld);
}
