#include <stdio.h>

/**
 * main - Prints all possible combinations of two-digit numbers
 */
int main(void)
{
	int t, e;

	for (t = 0; t < 100; t++)
	{
		for (e = 0; e < 100; e++)
		{
			if (t < e)
			{
				putchar((t / 10) + 48);
				putchar((t % 10) + 48);
				putchar(' ');
				putchar((e / 10) + 48);
				putchar((e % 10) + 48);
				if (t != 98 || e != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
