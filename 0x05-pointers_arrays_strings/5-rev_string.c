#include <stdio.h>
#include "main.h"
/**
 *rev_string - update value.
 *@s: value to be evaluate.
 *Return: not.
 */
void rev_string(char *s)
{
int length = 0;
int i = 0;
char *y = s;
int e = 0;
int x;
char n;
while (*y != '\0')
{
y++;
length++;
}
i = length - 1;
for ( ; e < ((i / 2) + 1) ; e++)
{
x = (i - e);
n = s[e];
s[e] = s[x];
s[x] = n;
}
}
