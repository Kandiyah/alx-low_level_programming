#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @x: integer.
 * Return: Always 0.
 */
int _abs(int x)
{
	if (x > 0)
	{
		return (x);
	}
	else if (x < 0)
	{
		return (x = x * -1);
	}
	else
		return (0);
}
