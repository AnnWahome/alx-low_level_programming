#include <unistd.h>

/**
 * _putchar - writes the character n to stdout
 * @n: The character to print
 *
 * Return: 1 On success.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char n)
{
	return (write(1, &n, 1));
}
