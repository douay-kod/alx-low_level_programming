#include <stdio.h>

/**
 * main - functions
 * Return: ee
 */

int main(void)
{
	char aph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(aph[i]);
	}
	putchar('\n');
	return (0);
}
