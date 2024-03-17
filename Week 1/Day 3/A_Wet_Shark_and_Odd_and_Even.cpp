#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(int n)
{
    vector<int> v(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if (sum % 2 == 0)
        return sum;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if ((sum - v[i]) % 2 == 0)
            return (sum - v[i]);
    }
}
int main()
{
    int n;
    cin >> n;

    cout << solve(n) << "\n";
    return 0;
}