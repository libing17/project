#include<stdio.h>
#include<stdlib.h>
void add(float,float);
void sub(float,float);
int main()
{float a,b;
int x;
printf("choose\n1.add\n2.subtract\n");
scanf("%d",&x);
    printf("enter the values\n");
    scanf("%f %f",&a,&b);
    switch(x)
    {case 1: add(a,b);
              break;
     case 2:  sub(a,b);
              break;
      default:printf("invalid choice\n");
              break;
                     }
   
   
   return 0;
}
void add(float a,float b)
{
  float c;
 c=a+b;
 printf("sum %f",c);
}
void sub(float a,float b)
{
  float d;
   d=a-b;
   printf("difference %f",d);
}
