#include <stdio.h>
#include <stdlib.h>

int main()
{
  int temp,c;
  float f;

  printf("enter temp in deg celsius:");
  scanf("%d",&c);
  f=c/33.8;
  printf("temp in fahrenheit is:%f",f);


  return 0;
}
