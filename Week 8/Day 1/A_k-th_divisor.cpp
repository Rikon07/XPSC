#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
vector<ll> divisors;
void Divisors(ll n)
{
    for(ll i=1; i*i<=n; i++)
    {
        if(n % i == 0)
        {
            divisors.pb(i);
            if(i*i != n)
                divisors.pb(n/i);
        }
    }
}
int main()
{
    ll n, k;
        cin >> n >> k;
        
    Divisors(n);

    sort(divisors.begin(), divisors.end());

    if(k <= divisors.size())
        cout << divisors[k-1] <<'\n';
    else
        cout << -1 <<'\n';

    return 0;
}
