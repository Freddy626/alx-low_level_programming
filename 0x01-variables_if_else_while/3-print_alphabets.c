#include<stdio.h>
/**
 *main - print
 * Description: print
 * Return: 0
 */
int main(void)
{
char c, f;
c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
f = 'A';
while (f <= 'Z')
{
putchar(f);
f++;
}
putchar('\n');
return (0);
}





