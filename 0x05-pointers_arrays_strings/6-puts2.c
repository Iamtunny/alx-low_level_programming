#include "main.h"
/**
 * puts2 - prints every characterof a string
 * @str: A pointer to an int that will be changed
 *
 * Return: voidwhich means it is correct
 */

void puts2(char *str)
{
int a;

for (a = 0; str[a] != '\0'; a++)
{
if (a % 2 == 0)
_putchar (str[a]);
}

_putchar ('\n');
}
