#include "main.h"
/**
 * print_alphabet - funtion that prints the lower case alphabets
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
