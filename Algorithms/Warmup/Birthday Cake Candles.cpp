#include<bits/stdc++.h>
using namespace std;

int main()
{
   int i, n, max=-1, count=0, h;

   cin >> n;

   for (i=0; i<n; i++)
   {
       cin >> h;

       if (h > max)
       {
           max = h;
           count = 1;
       }
       else if (h==max)
       {
           count++;
       }
   }
   cout << count;
   return 0;
}
