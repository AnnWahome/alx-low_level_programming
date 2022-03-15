#include "main.h"
/**
 * _abs - prints the absolute value of a number
 * @i: takes in an integer
 * Return: positive value if > 0, 0 if == 0, positive if < 0
 */
int _abs(int i)
{
	if (i < 0)
		return (i * -1);
	return (i);
}
