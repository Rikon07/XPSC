#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n;
      cin >> n;
    vector<ll> v(n);
    for(int i=0; i<n; i++)
      cin >> v[i];

    for(auto &u : v)
    {
      if(u == 1) 
        u += 1;
    }
    for(int i=1; i<n; i++)
    {
        if(v[i] % v[i-1] == 0)
          v[i] += 1;
    }

    for(auto &u : v)
      cout << u <<" ";
    cout << '\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;

    while(tc--)
    {
        solve();
    }
    return 0;
}
