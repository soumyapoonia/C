#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,j,n;
  printf("enter the limit:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      for(j=i;j<n;j++)
      {
          printf("*");
      }
      printf("*\n");
  }
}
