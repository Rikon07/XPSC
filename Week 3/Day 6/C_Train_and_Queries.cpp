#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define Yes cout << "YES\n"
#define No cout << "NO\n"
void solve(int n, int k)
{
    vector<int> rail(n);
    map<int, vector<int>> mp;
    for(int i=0; i<n; i++)
    {
        cin >> rail[i];
        mp[rail[i]].pb(i);
    }
    while(k--)
    {
        int a, b;
            cin >> a >> b;
        if(mp[a].empty() || mp[b].empty())
        {
            No;
            //return;
            continue;
        }
        if(a == b)
        {
            Yes;
            //return;
            continue;
        }
        if(mp[a].front() < mp[b].back())
        {
            Yes;
        }
        else
        {
            No;
        }
    }
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n, k;
        cin >> n >> k;

        solve(n, k);
    }
    return 0;
}
