#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
ll solve(ll n, ll k)
{
    vector<ll>v(n),cnt(31,0);
    for(auto &x : v)
      cin>>x;
 
    for(auto &u : v)
    {
        for(int i=30; i>=0; i--)
        {
            if(u & (1<<i))
              cnt[i]++;
        }
    }
 
    ll res = 0;
    for(int i=30; i>=0; i--)
    {
        int rem = n-cnt[i];
        if(rem <= k) {
            res += (1<<i);
            k -= rem;
        }
    }
 
    return res;
}
 
int main()
{
    fast();
    
    int tc;
    cin >> tc;
 
    while(tc--)
    {
        ll n, k;
        cin >> n >> k;
        cout << solve(n, k) <<'\n';
    }
    return 0;
}
