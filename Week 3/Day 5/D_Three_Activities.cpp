#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
ll solve(int n)
{
    vector<ll> a(n), b(n), c(n);
    vector<pair<ll, ll>> va, vb, vc;
    
    for(ll i=0; i<n; i++){
        cin >> a[i];
        va.pb({a[i], i});
    }
    for(ll i=0; i<n; i++){
        cin >> b[i];
        vb.pb({b[i], i});
    }
    for(ll i=0; i<n; i++){
        cin >> c[i];
        vc.pb({c[i], i});
    }

    sort(va.begin(), va.end(), greater<>());
    sort(vb.begin(), vb.end(), greater<>());
    sort(vc.begin(), vc.end(), greater<>());

    ll res = 0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
            {
                if(va[i].second != vb[j].second && va[i].second != vc[k].second && vb[j].second != vc[k].second)
                    res = max(res, va[i].first+vb[j].first+vc[k].first);
            }
        }
    }
    return res;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;

        cout << solve(n) <<"\n";
    }
    return 0;
}