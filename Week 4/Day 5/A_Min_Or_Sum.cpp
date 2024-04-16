#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(int n)
{
    vector<int> ar(n), bin(n);
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
        ans |= ar[i];
    }
    return ans;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
            cin >> n;
        
        cout << solve(n) <<"\n";
    }
    return 0;
}