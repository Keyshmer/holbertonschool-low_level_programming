#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 success
 **/
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != 'e' && low != 'q')
		{
			putchar(low);
		}
	}
	putchar('\n');
	return (0);
}
