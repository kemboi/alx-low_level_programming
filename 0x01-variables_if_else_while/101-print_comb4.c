#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 < 10; digit3++)
			{
				if ((digit2 != digit1) != digit3)
				{
					putchar(digit1 + '0');
					putchar(digit2 + '0');
					putchar(digit3 + '0');
					if (digit1 == 7 && digit2 == 8)
					{
						continue;
					}
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
