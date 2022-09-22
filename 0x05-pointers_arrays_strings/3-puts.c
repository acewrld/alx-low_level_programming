#include "main.h"
/**
 * _puts - prints a string
 * @str: A pointer to an int that wil be changed
 *
 * Return: void which means our answer is correct
 */

void _puts(char *str)
{
char *c;
int m;

c = str;

for (m = 0; c[m]; m++)
{
_putcar (c[m]);
}
_putchar('\n');
}
