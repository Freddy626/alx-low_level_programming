#include"main.h"
/**
 * main - print 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
int a, j = 0;
while(j<10)
{
for (a = 'a'; a <= 'z'; a++)
_putchar(a);
_putchar('\n');
j++;
}
}
