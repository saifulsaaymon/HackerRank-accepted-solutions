#include<stdio.h>

int main()
{
   int a;
   scanf("%d",&a);

   int b = a%10;
   int c = a/10;
   int d = c % 10;
   int e = c/10;
   int f = e%10;
   int g = e/10;
   int h = g%10;
   int i = g/10;

   printf("%d\n",b+d+f+h+i);

    return 0;
}
