#include <unistd.h>
#include "lists.h"

/**
 * _putchar - prints a character to the screen
 *
 * @x: the character to be printed to screen
 * Return: 1 always
 */
int _putchar(char x)
{
	write(1, &x, 1);

	return (1);
}

/**
 * print_string - prints a string
 *
 * @str: the string to be printed
 * Return: the number of characters printed
 */
int print_string(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_number - prints a number
 *
 * @num: the number to be printed
 * Return: the number of characters printed
 */
int print_number(long int num)
{
	int length = 0;

	if (num < 0)
	{
		length += _putchar('-');
		num = -num;
	}

	if (num / 10)
	{
		length += print_number(num / 10);
	}

	length += _putchar((num % 10) + '0');

	return (length);
}
