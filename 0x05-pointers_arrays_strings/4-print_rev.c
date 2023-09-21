#include "main.h"
/**
 *print_rev - prints string in reverese.
 *@s: value to be evaluated.
 *Return: not.
 */
void print_rev(char *s)
{
int count = 0;
for (; s[count] != '\0'; count++)
{
}
for (count = count - 1; count >= 0; count--)
{
_putchar(s[count]);
}
_putchar('\n');
}
