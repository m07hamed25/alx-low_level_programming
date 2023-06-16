#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Description: print all aplhabet letters
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int fristdigit = 0, secondigit;

	while (fristdigit <= 99)
	{
		secondigit = fristdigit;
		while (secondigit <= 99)
		{
			if (secondigit != fristdigit)
			{
				putchar((fristdigit / 10) + 48);
				putchar((fristdigit % 10) + 48);
				putchar(' ');
				putchar((secondigit / 10) + 48);
				putchar((secondigit % 10) + 48);

				if (fristdigit != 98 || secondigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secondigit++;
		}
		fristdigit++;
	}
	putchar('\n');

	return (0);
}
