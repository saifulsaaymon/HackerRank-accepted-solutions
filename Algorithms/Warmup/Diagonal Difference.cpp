#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, ar[100][100], LeftDiagonalSum=0, RightDiagonalSum = 0, i, j;

    cin >> n;

    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            cin>>ar[i][j];

            if (i==j)
            {
                LeftDiagonalSum += ar[i][j];
            }
            if (i+j==n-1)
            {
                RightDiagonalSum += ar[i][j];
            }
        }
    }
    cout << abs(LeftDiagonalSum - RightDiagonalSum) <<"\n";
    return 0;
}
