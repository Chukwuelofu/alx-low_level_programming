#include <stdio.h>

/**
 * main - this will print all possible combs of a single-digit number.
 *
 * Return: should be zero to denote success.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)

	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
