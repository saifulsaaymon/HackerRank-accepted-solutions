#include<stdio.h>

int main()
{
    int a, b, c, i;

    scanf("%d %d", &a, &b);

    for (i=0; i<b; i++)
    {
        scanf("%d",&c);

        if (c==a)
        {
            printf("%d",i);
        }
    }
    return 0;
}
