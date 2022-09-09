#include<stdio.h>
/**
 * main - print exclusion
 * Description: exclude q and e
 * Return: 0
 */
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
if (c == 'e')
{
c++;
continue;
}
if (c == 'q')
{
c++;
continue;
}
putchar(c);
c++;
}
putchar('\n');
return (0);
}
