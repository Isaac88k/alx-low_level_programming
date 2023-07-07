#include "main.h"
/**
 * _strncpy - Program copy a string
 * @dest: enter value
 * @src: enter value
 * @n: enter value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int f;

	f = 0;
	while (f < n && src[f] != '\0')
	{
		dest[f] = src[f];
		f++;
	}
	while (f < n)
	{
		dest[f] = '\0';
		f++;
	}

	return (dest);
}
