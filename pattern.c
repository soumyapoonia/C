#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,j,n;
  printf("enter the limit:");
  scanf("%d",&n);
  for(i=n;i>=1;i--)
  {
      for(j=1;j<=i-1;j++)
      {
          printf("  ");
      }
      for(j=1;j<=n-(i-1);j++)
      {
         printf("* ");
      }
     printf("\n");
  }
}
