#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, og, fg;
    cin >> n;

    for (i=0; i<n; i++)
    {
        cin >> og;

        if (og >= 38 && (fg = (5 - (og%5))) < 3)
        {
            cout << og+fg << "\n";
        }
        else
        {
            cout << og << "\n";
        }
    }
    return 0;
}
