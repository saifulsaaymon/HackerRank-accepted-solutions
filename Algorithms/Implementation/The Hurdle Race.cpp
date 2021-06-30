#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, a, h=0;
    cin >> n >> k;

    for (int i=0; i<n; i++)
    {
        cin >> a;
        if (a > h)
        {
            h = a;
        }
    }
    (k >= h) ? cout << 0 <<"\n" : cout << h-k << "\n";
    return 0;
}
