#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define Yes cout << "YES\n"
#define No cout << "NO\n"
ll solve(int n)
{
    vector<ll> ar(n);
    for(int i = 0; i < n; i++)
        cin >> ar[i];

    ll total = 0;
    for(int i = 0; i < n; i++)
    {
        if(ar[i] > 0)
            total += ar[i];
        else if(ar[i] < 0)
        {
            ll k = min(total, -ar[i]);
            // cout<<"in "<<k<<"\n";
            ar[i] += k;
            total -= k;
        }
    }
    // cout<<"\n";
    // for(int i=0;i<n;i++)
    //     cout<<ar[i]<<" ";
    // cout<<"\n";
    total = 0;
    for(int i = 0; i < n; i++)
    {
        if(ar[i] < 0)
            total += abs(ar[i]);
    }
    return total;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        cout << solve(n) << '\n';
    }
    return 0;
}