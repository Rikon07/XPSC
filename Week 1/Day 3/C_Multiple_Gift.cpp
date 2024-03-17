#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll x, y;
    cin >> x >> y;

    int seq = 0;
    for(ll i=x; i<=y; i=i*2)
    {
        seq++;
    }
    cout << seq <<"\n";
    
    return 0;
}