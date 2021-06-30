#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,a,po=0, ne=0, ze=0;
    cin>>n;

    for (int i=0; i<n; i++)
    {
        cin>>a;

        if (a>0) po++;
        else if (a<0) ne++;
        else if (a==0) ze++;
    }
    cout << fixed;
    cout<<setprecision(6)<<po/n<<"\n";
    cout<<setprecision(6)<<ne/n<<"\n";
    cout<<setprecision(6)<<ze/n<<"\n";

    return 0;
}
