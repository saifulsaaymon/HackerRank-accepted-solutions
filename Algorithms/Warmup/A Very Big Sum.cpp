#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, n, sum = 0;
    int i;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a;
        sum += a;
    }
    cout << sum << "\n";
    return 0;
}
