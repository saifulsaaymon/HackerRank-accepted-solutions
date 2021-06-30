#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s, t, a, b, m, n, apple, orange, appleCount=0, orangeCount=0;
    cin >> s >> t >> a >> b >> m >> n;

    for (int i=0; i < m; i++)
    {
        cin >> apple;
        if (a+apple >= s && a+apple <=t)
        {
            appleCount++;
        }
    }
    for (int i=0; i < n; i++)
    {
        cin >> orange;
        if (b+orange >= s && b+orange <=t)
        {
            orangeCount++;
        }
    }
    cout << appleCount << "\n" << orangeCount << "\n";
    return 0;
}
