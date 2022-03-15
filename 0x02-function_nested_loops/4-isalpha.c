#include "holberton.h"
/**
 * _isalpha - test a character is from the English alphabet
 * @c: character to be checked
 * Return: 1 if it is true
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
