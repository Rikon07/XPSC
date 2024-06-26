#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
bool isPossible(int t, int n, int x, int y)
{
    if(t < min(x, y))
        return false;
    int cnt = 1;
    t -= min(x, y);

    cnt += t/x + t/y;
    return cnt >= n;
}
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    int l=0, r = n*(max(x, y)), mid;
    while(l+1<r)
    {
        mid = l+(r-l)/2;
        if(isPossible(mid, n, x, y))
            r = mid;
        else
            l = mid;
    }
    cout << r <<'\n';
    return 0;
}