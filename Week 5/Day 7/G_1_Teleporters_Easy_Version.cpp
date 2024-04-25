#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
ll solve(int n, int c)
{
    vector<int> ar(n), res;
    //vector<pair<int, int>> v;
    int tele = 0, coin = 0;
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
        //v.pb({ar[i], i+1});
        res.pb(ar[i]+i+1);
    }
    //sort(v.begin(), v.end());
    sort(res.begin(), res.end());
    /*for(int i=0; i<n; i++)
    {
        cout << v[i].first<<" "<<v[i].second<<'\n';
    }*/
    /*for(int i=0; i<n; i++)
    {
        coin += v[i].first+v[i].second;
        tele++;
        if(coin == c) return tele;
        else if(coin > c)
        {
            tele--;
            coin -= v[i].first+v[i].second;
        }
    }*/
    for(int i=0; i<n; i++)
    {
        coin += res[i];
        tele++;
        if(coin == c) return tele;
        else if(coin > c)
        {
            tele--;
            coin -= res[i];
        }
    }
    return tele;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n, c;
        cin >> n >> c;

        cout << solve(n, c) <<'\n';
    }
    return 0;
}