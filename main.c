#include <stdio.h>
#include <stdlib.h>

int main()
{
  int position,n,i;
  int arr[100];
  printf("enter number of elements in an array:\t");
  scanf("%d",&n);
  printf("enter elements of an array:\n");
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  printf("enter the position you want to delete:");
  scanf("%d",&position);
