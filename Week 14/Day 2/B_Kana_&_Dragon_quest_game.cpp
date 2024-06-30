#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(ll h, ll n, ll m)
{
    ll tmp = h;

    int cnt = n;
    while(cnt)
    {
        if(((tmp/2) + 10) < tmp) tmp = (tmp/2) + 10;
        cnt--;
    }
    tmp -= (m*10);
    
    cout << (tmp <= 0 ? "YES" : "NO") <<'\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;

    while(tc--)
    {
        ll h, n, m;
          cin >> h >> n >> m;  
        solve(h, n, m);
    }
    return 0;
}
