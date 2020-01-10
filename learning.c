#include<stdio.h>
#include<stdlib.h>
void add(float,float);
void sub(float,float);
int main()
{float a,b,c;
float  d;
    printf("enter the values\n");
    scanf("%f %f",&a,&b);
    add(a,b);
    sub(a,b);
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
