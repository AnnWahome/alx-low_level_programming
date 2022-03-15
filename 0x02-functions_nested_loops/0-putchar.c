#include <main.h>
/**
*main - Entry point
*Print _putchar program
*Return: Always 0
*/
char putchar_prog(void)
{
	char pc = "_putchar";

	while(pc)
	{
		_putchar(pc);
		pc++;
	}
	_putchar('\n');

return (char);
}
