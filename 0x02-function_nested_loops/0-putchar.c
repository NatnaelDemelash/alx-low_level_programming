#include "main.h"
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
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
