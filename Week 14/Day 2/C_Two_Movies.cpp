#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(int n)
{
    vector<int> a(n), b(n);

    for(auto &x : a)
      cin >> x;
    for(auto &y : b)
      cin >> y;

    ll cnt_a = 0, cnt_b = 0;

    for(int i = 0; i<n; i++)
    {
        if(a[i] != b[i])
        {
            if (a[i] > b[i]) cnt_a += a[i];
            else cnt_b += b[i];
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(a[i] == b[i] and a[i] < 0)
        {
            if (cnt_a > cnt_b) cnt_a += a[i];
            else cnt_b += b[i];
        }
        else if (a[i] == b[i] and a[i] > 0)
        {
            if (cnt_a < cnt_b) cnt_a += a[i];
            else cnt_b += b[i];
        }
    }

    cout << min(cnt_a, cnt_b) << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while(tc--)
    {
         int n;
          cin >> n;
        solve(n);
    }

    return 0;

}
