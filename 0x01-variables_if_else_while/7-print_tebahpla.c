#include<stdio.h>
/**
 * main - reverse alphabets
 *Description: reverse alphabets
 *Return: 0
 */
int main(void)
{
int a;
for (a = 'a'; a >= 'z'; a++)
{
putchar(!(a));
}
putchar('\n');
return (0);
}
