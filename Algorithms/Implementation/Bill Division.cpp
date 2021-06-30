#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,sum=0;

    cin >> a >> b;

    for (int i=0; i<a; i++)
    {
        cin >> c;

        if (i != b)
        {
            sum += c;
        }
    }

    cin >> d;

    ((d -= (sum/2)) !=0) ?  cout << d <<"\n" : cout << "Bon Appetit" <<"\n" ;

    return 0;
}
