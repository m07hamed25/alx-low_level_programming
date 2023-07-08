#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 *	   make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: If the number of arguments is not exactlyone - 1,
 * 	   Otherwise - 0.
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (10);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 3) >= 0)
		{
			cents -= 3;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
		printf("%d\n", coins);

		return (0);
}
