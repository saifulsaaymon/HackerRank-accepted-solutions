#include<stdio.h>

void max(int e,int f, int g, int h)
{
    if (e>f && e>g && e>h) printf("%d\n",e);
    else if (f>e && f>g && f>h) printf("%d\n",f);
    else if (g>e && g>f && g>h) printf("%d\n",g);
    else if (h>e && h>f && h>g) printf("%d\n",h);
}

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    max(a,b,c,d);
}
