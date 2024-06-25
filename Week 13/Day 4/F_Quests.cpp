#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
 
void solve()
{
    ll n, c, d;
    cin >> n >> c >> d;
    vector<ll>v(n);
    for(auto &x : v)
      cin>>x;
 
    sort(v.rbegin(),v.rend());
    ll mx = v[0];
 
    ll inf = 0;
    for(int i=0; i<min(d,n); i++)
      inf += v[i];
 
    if(inf >= c)
    {
        cout<<"Infinity"<<endl;
        return;
    }
    else if (mx*d < c)
    {
        cout<<"Impossible"<<endl;
        return;
    }
 
    auto ok = [&](ll k)
    {
        ll ans = 0, d_tmp = d;
        for(int i=0; i<n; i++)
        {
        ll cnt = 0,t = i+1;
 
        while(d_tmp > 0 and t <= d)
        {
            cnt++;
            t = (1+k+t);
            d_tmp--;
        }
        ans += (cnt*v[i]);
       }
       return ans >= c;
    };

 
    ll l = 0, r = 2e7, an = 0;
    while(l <= r)
    {
        ll mid = (l+r)>>1;
        if(ok(mid))
        {
            an = mid;
            l = mid+1;
        }
        else r = mid-1;
    }
    cout<<an<<endl;
}
 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int tc = 1;
    cin >> tc;
 
    while(tc--)
    {
        solve();
    }
    return 0;
}
