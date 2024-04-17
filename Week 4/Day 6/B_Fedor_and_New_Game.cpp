#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int solve(int n, int m, int k)
{
    vector<int> ar(m+1);
    for(int i=0; i<=m; i++)
        cin >> ar[i];

    vector<vector<int>> bins;
    for(int i=0; i<=m; i++)
    {
        vector<int> eachbin;
        for(int k=0; k<n; k++)
        {
            if((ar[i] >> k) & 1)
                eachbin.pb(1);
            else
                eachbin.pb(0);
        }
        bins.pb(eachbin);
    }
    
    int friends = 0;
    vector<int> fedor = bins[m];
    for(int i=0; i<m; i++)
    {
        int cnt = 0;
        for(int j=0; j<n; j++)
        {
            if(bins[i][j] != fedor[j])
                cnt++;
        }
        if(cnt <= k)
            friends++;
    }
    return friends;
}
int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    cout << solve(n, m, k) <<"\n";
    return 0;
}