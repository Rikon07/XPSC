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

    ll sum = 0;
    int l=0, r=0, ans=INT_MAX;

    while(r < n)
    {
        sum += ar[r];
        if(sum >= s)
        {
            while(sum >= s)
            {
                ans = min(ans, r - l + 1);
                sum -= ar[l];
                l++;
            }
        }
        r++;
    }

    if(ans == INT_MAX)
        cout << -1 <<"\n";
    else
        cout << ans <<"\n";
    return 0;
}