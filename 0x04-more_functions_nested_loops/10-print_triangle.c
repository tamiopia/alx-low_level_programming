#include "main.h"

/**
 * print_triangle - Print triangle size.
 * @size : The height of the triangle
 * Return: Void.
 */
void print_triangle(int size)
{
	int i;
	int x;
	int y;

	for (i = 0; i < size; i++)
	{
		for (y = size - 1 - i; y > 0; y--)
		{
			_putchar(' ');
		}
		for (x = 0; x <= i; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
