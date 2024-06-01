#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n,q; 
    cin >> n >> q;
    vector<ll> ar(n), d(n+2), pre(n+1);
    for(auto &ele : ar)
      cin >> ele;

    while(q--)
    {
        ll l, r;
          cin >> l >> r;
        d[l] += 1;
        d[r+1] -= 1;
    }

    for(int i=1; i<=n; ++i)
      pre[i] = pre[i-1]+d[i];

    sort(pre.rbegin(), pre.rend());
    sort(ar.rbegin(), ar.rend());

    ll sum = 0;
    for(int i=0; i<n; i++)
      sum += (pre[i]*ar[i]);

    cout << sum <<'\n';

    return 0;
}
