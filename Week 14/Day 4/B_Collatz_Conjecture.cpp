#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(ll x, ll y, ll k)
{
    while(x > 1 && k > 0)
    {
        ll st = (y - (x % y));
        
        if(k <= st)
        {
            x += k;
            k = 0;
        }
        else
        {
            x += st;
            k -= st;
        }
        while(x % y == 0)
          x /= y;
    }
    if(k > 0)
      x += (k % (y - 1));
    
    cout << x <<'\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--)
    {
        ll x, y, k;
          cin >> x >> y >> k;
        solve(x, y, k);
    }
    return 0;
}
