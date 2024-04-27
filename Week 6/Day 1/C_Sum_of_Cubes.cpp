#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
string SumOfCubes(ll x, map<ll, ll> &mp)
{
    for(ll i=1; i*i*i<=x; i++)
    {
        ll firstOne = i*i*i;
        ll toSearch = x - firstOne;
        if(mp.find(toSearch) != mp.end())
        {
            return "YES";
        }
    }
    return "NO";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        ll x;
        cin >> x;
        map<ll, ll> mp;
        for(ll i=1; i<=10000; i++)
        {
            mp[i*i*i]++;
        }
        cout << SumOfCubes(x, mp) <<"\n";
    }
    return 0;
}
