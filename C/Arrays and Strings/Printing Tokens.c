#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
   char a[1000];
   scanf("%[^\n]%*c",a);

   for (int i=0; i< strlen(a); i++)
   {
       if (a[i] == ' ') printf("\n");
        else printf("%c",a[i]);
   }
   return 0;
}
