#include "main.h"
#include <string.h>
/**
 * _strlen -  a function that returns the length of a string
 * @s: counting string length
 * Return: 0
 */
int _strlen(char *s)
{
int a = 0;
for ( ; *s != '\0' ; s++)
a++;
return (a);
}
