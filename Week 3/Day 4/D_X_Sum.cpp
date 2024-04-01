#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int ar[201][201];
int n, m;
ll calculateSum(int x,int y)
{
    ll res=0;
    int indx=0;
    while(x-indx>-1 && y-indx>-1)
    {
        res+=ar[x-indx][y-indx];
        indx++;
    }
    indx=0;
    while(x-indx>-1 && y+indx<m)
    {
        res+=ar[x-indx][y+indx];
        indx++;
    }
    indx=0;
    while(x+indx<n && y+indx<m)
    {
        res+=ar[x+indx][y+indx];
        indx++;
    }
    indx=0;
    while(x+indx<n && y-indx>-1)
    {
        res+=ar[x+indx][y-indx];
        indx++;
    }
 
    return res-3*(ar[x][y]);
}
int solve()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> ar[i][j];
        }
    }
    ll maxSum = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            maxSum = max(maxSum, calculateSum(i, j));
        }
    }
    return maxSum;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        //int n, m;
        cin >> n >> m;

        cout << solve() <<"\n";
    }
    return 0;
}