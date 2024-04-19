#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
void solve()
{
    string s;   cin >> s;
    int n = s.size();
    map<char, vector<int>> mp;
    for(int i=0; i<n; i++)
    {
        mp[s[i]].pb(i+1);
    }
    if(s[0] > s[n-1])
    {
        int jump = 0, cost = abs(s[0]-s[n-1]);
        vector<int> way;

        for(int i=0; s[0]+i>=s[n-1]; i--)
        {
            char c = s[0]+i;
            if(mp.find(c) != mp.end())
            {
                for(auto val: mp[c])
                {
                    way.pb(val);
                }
            }
        }
        cout << cost <<" "<< way.size() <<'\n';
        for(auto path: way)
        {
            cout << path <<" ";
        }
        cout <<'\n';
    }
    else if(s[0] < s[n-1])
    {
        int jump = 0, cost = abs(s[0]-s[n-1]);
        vector<int> way;

        for(int i=0; s[0]+i<=s[n-1]; i++)
        {
            char c = s[0]+i;
            if(mp.find(c) != mp.end())
            {
                for(auto val: mp[c])
                {
                    way.pb(val);
                }
            }
        }
        cout << cost <<" "<< way.size() <<'\n';
        for(auto path: way)
        {
            cout << path <<" ";
        }
        cout <<'\n';
    }
    else
    {
        cout << 0 <<" "<< mp[s[0]].size()<<'\n';
        for(auto x: mp[s[0]])
            cout << x <<" ";
        cout <<'\n';
    }
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
