#include<stdio.h>

int main()
{
    int n, i, a[1000], maxCount=0, minCount=0;

    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int min = a[0], max = a[0];

    for (i=0; i<n; i++)
    {
        if (min>a[i])
        {
            min = a[i];
            minCount++;
        }
    }

    for (i=0; i<n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            maxCount++;
        }
    }
    printf("%d %d",maxCount,minCount);
    return 0;
}
