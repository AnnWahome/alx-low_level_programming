int putchar_prog(char *pc)
{
	char *pc = "_putchar";

	while(*pc)
	{
		_putchar(*pc);
		*pc++;
	}
	_putchar('\n');

return (0);
}
