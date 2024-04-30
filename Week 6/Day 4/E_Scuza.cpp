#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
void solve(int n, int q)
{
    vector<int> ar(n+1, 0);
    vector<ll> pre(n+2, 0);
    for(int i=1; i<=n; i++)
    {
        cin >> ar[i];
        
        pre[i] = ar[i]+pre[i-1];
    }
    vector<ll> ans(q);
    vector<pair<ll, int>> que(q);
    for(int i=0; i<q; i++)
    {
        cin >> que[i].first;
        que[i].second = i;
    }
    sort(que.begin(), que.end());
    int l=0;
    for(int i=0; i<q; i++)
    {
        while(1)
        {
            if(l == n || (ar[l+1] > que[i].first)) break;
            l++;
        }
        ans[que[i].second] = pre[l];
    }
    for(auto ele: ans)
    {
        cout << ele <<" ";
    }
    cout << '\n';
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n, q;
        cin >> n >> q;

        solve(n, q);
    }
    return 0;
}