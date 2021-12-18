#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,p,q,r,h;
    float pi=3.14,v;
    printf("enter the values of x and y:\n");
    scanf("%d%d",&x,&y);
       z=(x+y)*(x/y);
       p=x*x*x+y*y*y;
    printf("the value of z is:%d\n",z);
    printf("the value of p is:%d\n",p);
       q=x*y*y;
    printf("the value of q is:%d\n",q);

    printf("enter the radius:");
    scanf("%d",&r);
    printf("enter the height:");
    scanf("%d",&h);
      v=(4/3)*(pi)*r*r*h;
    printf("the value of v is:%f\n",v);
}
