#include <stdio.h>

/**
 * main - prints the alphabetic in lowercase
 *
 * Return: 0 is success
 **/
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z'; c++)
	{
	putchar(c);
	}

	putchar('\n');
	return (0);
}
