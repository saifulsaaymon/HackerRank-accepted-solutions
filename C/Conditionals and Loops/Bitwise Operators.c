#include<stdio.h>

int main()
{
    int n,k,i,j,a=0, b=0, c=0, d, e, f;
    scanf("%d %d", &n, &k);

    for (i=1; i<=n; i++)
    {
        for (j=i+1; j<=n; j++)
        {
            d = i|j;
            e = i&j;
            f = i^j;

            if (d<k)
            {
                if (b<d)
                    b = d;
            }
            if (e<k)
            {
                if(a<e)
                    a = e;
            }
            if (f<k)
            {
                if (c<f)
                    c = f;
            }
        }
    }
   printf("%d\n%d\n%d\n",a,b,c);
   return 0;
}
