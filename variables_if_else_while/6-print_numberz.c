#include <stdio.h>

/**
 * main - prints all single digit
 *
 * Return: 0 success
 **/
int main(void)
{
	int p;

	for (p = 0; p <= 9; p++)
	{
	putchar ((p) + '0');
	}
	putchar('\n');
	return (0);
}
