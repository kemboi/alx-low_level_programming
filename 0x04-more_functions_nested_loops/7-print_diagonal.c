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
		for (i = 1; i <= n; i++)
		{
			for (x = 1; x <= i; x++)
			{
			_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
