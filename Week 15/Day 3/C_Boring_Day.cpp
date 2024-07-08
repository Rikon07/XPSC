#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
     
    int n, l, r;
    cin >> n >> l >> r;
    vector<ll> v(n), pre(n);

    for(auto &x : v)
      cin >> x;

    pre[0] = v[0];
    for(int i = 1; i < n; i++)
      pre[i] = pre[i-1] + v[i];

    int cnt = 0, ind = -1;
    for(int i = 0; i < n; i++)
    {
        if (i <= ind) continue;
        if (v[i] > r)
        {
            ind = i;
            continue;
        }
        if (v[i] >= l and v[i] <= r) 
        {
            ind = i, cnt++;
            continue;
        }

        int low = 0, high = n, ans = -1;
        while (low <= high)
        {
            int mid = (low + high) >> 1;
            ll x = pre[mid] - (ind >= 0 ? pre[ind] : 0);

            if (x > r) high = mid - 1;
            else if (ind < mid && (x >= l && x <= r)) {
                ans = mid, high = mid - 1;
            } else low = mid + 1;
        }

        ind = i; 
        if (ans != -1)
        {
            cnt++, ind = ans;
        }
    }

    cout << cnt << '\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;

    while(tc--)
    {
        solve();
    }

    return 0;

}
