#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    int l=1, r = min(a, b);
    int ans =1;
    while(l<=r)
    {
        int mid = l+(r-l)/2;
        if(a/mid + b/mid >= n)
        {
            l = mid+1;
            ans = mid;
        }
        else
        {
            r = mid-1;
        }
    }

    cout << ans <<'\n';
    return 0;
}