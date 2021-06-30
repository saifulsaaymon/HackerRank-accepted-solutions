#include<stdio.h>
int main()
{
    char a,b[30],c[100];
    scanf("%c %s %[^\n]%*c", &a, &b, &c);

    printf("%c\n",a);
    printf("%s\n",b);
    printf("%s\n",c);


    return 0;
}
