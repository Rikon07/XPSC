#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int solve(int n)
{
    vector<int> ar(n);
    map<int, int> mp;

    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
        mp[ar[i]]++;
    }

    sort(ar.begin(), ar.end());
    int ans = 0;
    
    for(int i=0; i<n; i++)
    {
        int ele = ar[i];
        if(mp[ar[i]] != 0)
        {
            ans++;
            while(mp[ele] > 0)
            {
                mp[ele]--;
                ele++;
            }
        }
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