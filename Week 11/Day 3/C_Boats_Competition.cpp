#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
void solve(int n)
{
    vector<int> ar(n);
    map<int, int> mp;
    for (int i=0; i<n; i++)
    {
        cin >> ar[i];
        mp[ar[i]]++;
    }
    set<int> s;
    int cnt = 0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            s.insert(ar[i]+ar[j]);
        }
    }
    int ans = 0;
    for (int it : s)
    {
        int cnt = 0;

        map<int, int> temp = mp;
        for (int i = 0; i < n; i++)
        {
            int a = ar[i];
            int b = it - ar[i];
            if (temp[a] <= 0)
                continue;
            temp[a]--;
            if (temp[b] > 0)
            {
                cnt++;
                temp[b]--;
            }
        }
        ans = max(cnt, ans);
    }
    cout << ans << endl;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        solve(n);
    }
    return 0;
}