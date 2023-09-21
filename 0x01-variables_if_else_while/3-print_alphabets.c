#include <stdio.h>
/**
 * main - main entry
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
char d = 'a';
while (d <= 'z')
{
putchar(d);
d++;
}
d = 'A';
while (d <= 'Z')
{
putchar(d);
d++;
}
putchar('\n');
return (0);
}
