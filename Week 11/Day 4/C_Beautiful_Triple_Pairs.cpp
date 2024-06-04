#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v)
      cin >> x;

    ll ans = 0;
    map<tuple<int,int,int>,int> mp;
    for(int i=0; i<n-2; i++)
    {
        auto trip = make_tuple(v[i],v[i+1],v[i+2]);
        vector<tuple<int,int,int>>sub;

        sub.pb({0,v[i+1],v[i+2]});
        sub.pb({v[i],0,v[i+2]});
        sub.pb({v[i],v[i+1],0});

        for(auto u : sub)
        {
            ans += mp[u]-mp[trip];
            mp[u]++;
        }
        mp[trip]++;
    }

    cout << ans <<'\n';
}

int main()
{
    int tc;
    cin >> tc;

    while(tc--)
      solve();

    return 0;
}
