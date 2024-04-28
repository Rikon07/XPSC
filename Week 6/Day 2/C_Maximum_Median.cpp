#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int solve(int n, int k)
{
  vector<int> ar(n);
    for (int i=0; i<n; i++)
    {
        cin >> ar[i];
    }

    sort(ar.begin(), ar.end());

    auto ok = [&](ll mid)
  {
        ll cnt = 0;
        for (int i = (n/2); i<n;i++)
        {
            cnt += (ar[i] < mid ? (mid - ar[i]) : 0);
        }
        return cnt <= k;
        };

    ll l = 1, r = 2e9, mid, ans = 0;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (ok(mid)) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

  cout << solve(n, k) <<'\n';
    return 0;
}
