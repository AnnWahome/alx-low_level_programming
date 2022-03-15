char putchar_prog(void)
{
	char *pc = "_putchar";

	while(*pc)
	{
		_putchar(pc);
		*pc++;
	}
	_putchar('\n');

return (0);
}
