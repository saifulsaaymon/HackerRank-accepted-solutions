#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,n,i;
    cin >> n;

    for (i=0; i<n; i++)
    {
        cin >> a >> b >> c;

        abs(a-c) < abs(b-c) ? cout << "Cat A" : abs(b-c) < abs(a-c) ? cout << "Cat B" : cout << "Mouse C";
        cout << "\n";

    }
    return 0;
}
