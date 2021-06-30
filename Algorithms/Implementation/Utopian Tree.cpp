#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n[10], m, i, j;
    cin >> t;

    for (i=0; i<t; i++)
    {
        cin >> n[i];
        m=1;

        if (n[i] != 0)
        {
            for (j=1; j<= n[i]; j++)
            {
                if (j%2 != 0)
                {
                    m = 2*m;
                }
                else
                {
                    m = m+1;
                }
            }
        }
        cout << m << "\n";
    }
    return 0;
}
