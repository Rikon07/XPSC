#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int LastSetBitPosition(int num)
{
    int position = 0;
    while(num)
    {
        position++;
        num >>= 1;
    }
    return position;
}
ll solve(int n)
{
    vector<int> ar(n), bin(n);
    map<int, int> mp;
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
        bin[i] = LastSetBitPosition(ar[i]);
        mp[bin[i]]++;
    }
    ll ans = 0;
    for(auto it: mp)
    {
        ll p = it.second;
        ans += (p*(p-1))/2;
    }
    return ans;
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