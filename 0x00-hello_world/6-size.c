#include<stdio.h>
int main(void)
{
  printf("Size of the integer is: %d byte(s)\n",sizeof(int));
  printf("Size of the char is : %i byte(s)\n",sizeof(char));
  printf("Size of the long int: %d byte(s)\n",sizeof(long int));
  printf("Size of the long long int: %d byte(s)\n",sizeof(long long int));
  printf("Size of the float:%d byte(s)\n",sizeof(float));
  return(0);
}
