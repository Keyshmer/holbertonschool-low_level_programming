#include <stdio.h>

/**
 * main - entry points
 *
 * Return: 0 success
 **/
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	for (low = 'A'; low <= 'Z'; low++)
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
