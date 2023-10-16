#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main - text or printf accoring to the number.
 *
 * Return: 0 is success
 **/
int main(void)
{
	int n, f;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	f = n % 10;
	prinf("Last  digit of %d is %d", n d);

	if (last > 5)
	{
		printf(" and is greater than 5\n");
	}
	else
	{
		if (last == 0)
		{
			printf(" and is 0\n");
		}
		else
		{
		if (last < 6 && last != 0)
		{
			printf(" and is less than 6 and not 0\n");
		}
		}
	}
	return (0);
}
