#include "main.h"
/**
 * print_diagonal - print '\'
 * @n: number of times slashes will be printed
 * Return: none
 */
void print_diagonal(int n)
{
	int i, x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (x = 0; x < i; x++)
			{
			_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
