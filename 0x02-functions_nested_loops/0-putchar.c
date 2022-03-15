#include "main.h"
/**
 * main - Entry point
 * No argument expected
 * Return: 0
 **/
int main(void)
{
	char ann[] = "_putchar";

	int n;

	for (n = 0; n < 8; n++)
	{
		_putchar(ann[n]);
	}
	_putchar('\n');
	return (0);
}
