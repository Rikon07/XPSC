#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n;
    ll s;
    cin >> n >> s;

    vector<int> ar(n);
    for(int i=0; i<n; i++)
        cin >> ar[i];

    map<int, int> mp;
    ll l=0, r=0, sum=0, ans=0;
    while (r<n)
    {
        mp[ar[r]]++;
        if(mp[ar[r]] == 1)
            sum++;
        while(sum > s)
        {
            mp[ar[l]]--;
            if(mp[ar[l]] == 0)
                sum--;
            l++;
        }
        ans += r-l+1;
        r++;
    }
    cout<<ans<<'\n';
    return 0;
}