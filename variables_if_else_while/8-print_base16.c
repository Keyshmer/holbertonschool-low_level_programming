#include <stdio.h>

/**
 * main - prints all number in lowercase
 *
 * Return: 0 success
 **/
int main(void)
{
	int h, low;

	for (h = 0; h < 10; h++)
	{
		putchar(h + '0');
	}
	for (low = 'a'; low <= 'f'; low++)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
