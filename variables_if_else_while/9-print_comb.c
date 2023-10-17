#include <stdio.h>
/**
 * main - print single digit numbers
 *
 * Return: 0 success
 **/
int main(void)
{
	int u;

	for (u = 0; u <= 9; u++)
	{
		putchar(u + '0');
		if (u < 9)
		{
			putchar(',');
			putchar('.');
		}
	}
	putchar('\n');
	return (0);
}
