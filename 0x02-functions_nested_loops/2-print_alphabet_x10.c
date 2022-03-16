#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int alphabet;
	int count;


	count = 0;
while (count < 10)
{
for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
{
	putchar(alphabet);
}

	count++;
	putchar('\n');
}


}
int main(void) {
        print_alphabet_x10();
	return (0);
}
