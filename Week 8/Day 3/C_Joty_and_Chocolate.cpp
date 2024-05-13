#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
    ll n, a, b, p, q;
        cin >> n >> a >> b >> p >> q;

    ll sum = 0;
    sum += (n/a)*p;
    sum += (n/b)*q;

    ll losagu = a/(__gcd(a,b))*b;
    sum -= (n/losagu)*(min(p, q));

    cout << sum <<'\n';
    return 0;
}