#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *
 * main - prints the alphabetic
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
