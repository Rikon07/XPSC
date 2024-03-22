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

    ll sum = 0, l=0, r=0, ans=0;

    while(r<n)
    {
        sum += ar[r];
        if(sum <= s)
        {
            ans += r-l+1;
        }
        else
        {
            while(sum > s && l<r)
            {
                sum -= ar[l];
                l++;
            }
            if(sum <= s)
            {
                ans += (r-l+1);
            }
        }
        r++;
    }

    cout << ans <<"\n";
    return 0;
}