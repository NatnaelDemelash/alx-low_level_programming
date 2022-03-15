#include "main.h"
#include <stdio.h>
/**
 * main - main block
 * Description: Print _putchar.
 * Return: 0
 */
int main(void)
{
	char c[9] = "_putchr";
	int i = 0;

	while (i < 9)
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
