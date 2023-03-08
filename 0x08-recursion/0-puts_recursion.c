#include "main.h"
/**
 * _puts_recursion - function to print a string
 * @s: character array to print
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	_putchar('\n');
}
