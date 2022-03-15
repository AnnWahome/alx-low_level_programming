#include <myputchar.h>
/**
*main - Entry point
*Print _putchar program
*Return: Always 0
*/
int main(void)
{
	char pc = "_putchar";

	while(pc)
	{
		_putchar(pc);
		pc++;
	}
	_putchar('\n');

return (0);
}
