#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 or 5 up to 1024
 * Return: Always (Success)
 */

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 ==0))
			sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
