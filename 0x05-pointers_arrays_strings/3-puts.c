#include "main.h"
/**
 *_puts - prints string to standard output
 *@str: Character Pointer input
 *Returns: Nothing
 */
void _puts(char *str)
{

int j = 0;

while(str[j] != '\0')
{
 _putchar(str[j]);
j++;
_putchar('\n');
}
