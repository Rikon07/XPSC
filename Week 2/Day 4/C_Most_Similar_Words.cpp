#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int diff(string x, string y)
{
    int d = 0;
    int n = x.size();
    for(int i=0; i<n; i++)
    {
        d += abs(x[i]-y[i]);
    }
    return d;
}
int solve(int n, int m)
{
    int mn = INT_MAX;
    string s[n];
    for(int i=0; i<n; i++)
    {
        cin >> s[i];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            mn = min(mn, diff(s[i], s[j]));
        }
    }
    return mn;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n, m;
            cin >> n >> m;

        cout << solve(n, m) <<"\n";
    }
    return 0;
}