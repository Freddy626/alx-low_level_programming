#include <ctype.h>
#include "main.h"
/**
 * print_sign - print that shit
 * @n: value
 * Description: checks
 * Return: 1 0r 0 or -1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
 else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
