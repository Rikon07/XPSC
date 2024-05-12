#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll l, r;
        cin >> l >> r;
  
    cout << "YES" << '\n'; 
    for (ll i=l; i<r+1; i+=2)
        cout << i <<' '<< i+1 << '\n';

    return 0;
}
