#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - conditional statement for two integers
 * Description: puts two integers in one printf statement
 * Return: 0
 */ 
int main(void)
{
int n, a;
srand(time(0));
n = rand() - RAND_MAX / 2;
a = n % 10;
if (a > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, a);
}
else if (a == 0)
{
printf("Last digit of %d is %d and is zero", n, a);
}
else if (a < 6)
{
printf("Last digit of %d is %d and is less than 6 not 0", n, a);
}
else
{
putchar('\n');
}
return (0);
}

