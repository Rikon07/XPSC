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
    multiset<int> ms;

    while(r<n)
    {
        ms.insert(ar[r]);
        int mx, mn;
        mn = *ms.begin(), mx = *ms.rbegin();
        if((mx-mn) <= s)
        {
            ans += (r-l+1);
        }
        else
        {
            while(l<r)
            {
                if((mx-mn) <= s) break;

                auto it = ms.find(ar[l]);
                ms.erase(it);
                l++;
            }
        }
        r++;
    }

    cout << ans <<"\n";
    return 0;
}