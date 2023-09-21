#include "main.h"
/**
 * _puts - a function that prints a string
 *@str: a char pointer used to print the string
 *Retrun: always 0
 */
void _puts(char *str)
{
for ( ; *str != '\0' ; str++)
_putchar(*str);
_putchar('\n');
}
