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
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	char c;

	for (c = 'a' ; c <= 'z'; c++)
	putchar(c);
	putchar('\n');

	return (0);
}
