#include <stdlib.h>
#include <time.h>
/**
 * main - determine if n is negative or negative etc.
 *
 * Return: 0
**/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf(n);

	if (n > 0)
	{
		printf(" is positive\n");
	}
	else
	{
		if (n == 0)
		{
			printf(" is zero\n");
		}
		else
		{
		if (n < 0)
		{
			printf(" is negative\n");
		}
		}
	return (0);
}
