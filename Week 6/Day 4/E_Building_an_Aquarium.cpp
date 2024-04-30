#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
ll solve(int n, int w)
{
    vector<int> ar(n);
    for(int &height: ar)
        cin >> height;

    ll l=0, r=INT_MAX, mid;
    while(l<r-1)
    {
        mid = (l+r)/2;
        ll water = 0;
        for(int i=0; i<n; i++)
        {
            if(ar[i] < mid)
            {
                water += (mid-ar[i]);
            }
        }
        if(water <= w)
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    return l;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n, x;
        cin >> n >> x;

        cout << solve(n, x) <<'\n';
    }
    return 0;
}