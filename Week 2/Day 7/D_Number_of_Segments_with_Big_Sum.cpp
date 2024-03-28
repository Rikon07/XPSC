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

    int l = 0, r = 0;
    ll sum = 0, ans = 0;

    while(r < n)
    {
        sum += ar[r];
        while(sum >= s && l <= r)
        {
            ans += n-r;
            sum-= ar[l];
            l++;
        }
        r++;
    }

    cout << ans << "\n";
    return 0;
}