#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define Yes cout << "YES\n"
#define No cout << "NO\n"
int main()
{    
    int n;
      cin >> n;
    map<ll, ll> mp;

    while(n--)
    {
        ll l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r+1]--;
    }

    vector<ll> v;
    for(auto [x,y] : mp)
      v.push_back(y);

    for(int i=1; i<v.size(); i++)
      v[i] = v[i-1]+v[i];

    for(auto ele: v)
    {
        if(ele > 2)
        {
            No;
            return 0;
        }
    }
    Yes;
    return 0;
}
