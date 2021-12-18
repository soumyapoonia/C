#include <stdio.h>
#include <stdlib.h>

int main()
{
  float g,mg,kg;
  printf("enter the value in miligram:");
  scanf("%f",&mg);
  g=100*mg;
  kg=100000*mg;
  printf("value in gram:%f",g);
  printf("value in kilogram:%f",kg);

  return 0;
}
