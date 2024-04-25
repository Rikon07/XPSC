#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
ll solve(int n)
{
    vector<int> ar(n);
    int neg = 0, mini = INT_MAX;
    ll sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
        sum += abs(ar[i]);
        if(ar[i] < 0) neg++;
        mini = min(mini, abs(ar[i]));
    }
    if(neg%2) sum -= (2*mini);
    return sum;                          ///     (•_•)
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;

        cout << solve(n) <<'\n';
    }
    return 0;
}