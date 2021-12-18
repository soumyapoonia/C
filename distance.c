#include <stdio.h>
#include <stdlib.h>

int main()
{
  float km,m,cm,mm;
  printf("enter the distance in km:");
  scanf("%f",&km);
  m=km*1000;
  cm=km*100000;
  mm=km*1000000;
  printf("distance in meters is:%f",m);
  printf("distance in centimeters is:%f",cm);
  printf("distance in milimeters is:%f",mm);

  return 0;
}

