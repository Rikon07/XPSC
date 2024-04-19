#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
void solve()
{
    string s;   cin >> s;
    int n = s.size();
    map<char, int> mp;
    for(int i=0; i<n; i++)
    {
        mp[s[i]] = i+1;
    }
    sort(s.begin()+1, s.end()-1);
    //cout << s <<'\n';
    int cost = 0, jump = 0;
    vector<int> ind;
    for(int i=0; i<n-1; i++)
    {
        cost += abs(s[i+1]-s[i]);
        
    }
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}