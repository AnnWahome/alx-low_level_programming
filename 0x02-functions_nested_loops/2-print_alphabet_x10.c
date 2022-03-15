#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int t;
	char a;

	for (t = 0; t < 10; t++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
