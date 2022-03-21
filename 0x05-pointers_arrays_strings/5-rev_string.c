#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: input
 * Return: output
 */
void rev_string(char *s)
{
	int c = 0;
	int r = 0;
	char tmp;

	while (s[c] != '\0')
	{
		c++;
	}
	l--;
	while (c > r)
	{
		tmp = s[r];
		s[r] = s[c];
		s[c] = tmp;
		c--;
		r++;
	}
}
