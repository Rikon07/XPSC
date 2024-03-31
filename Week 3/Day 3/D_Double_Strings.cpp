#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
void solve(int n)
{
    vector<string> vec(n);
    map<string, int> mp;
    for(int i=0; i<n; i++)
    {
        cin >> vec[i];
        mp[vec[i]]++;
    }
    vector<int> ans(n, 0);
    for(int i=0; i<n; i++)
    {
        string samne = "";
        for(int j=0; j<vec[i].size(); j++)
        {
            string pise = "";
            samne += vec[i][j];
            for(int k=j+1; k<vec[i].size(); k++)
            {
                pise += vec[i][k];
            }
            if(samne == pise)
            {
                if(mp[samne] > 0)
                {
                    ans[i] = 1;
                    break;
                }
            }
            else
            {
                if(mp[samne] > 0 && mp[pise] >0)
                {
                    ans[i] = 1;
                    break;
                }
            }
        }
    }
    for(auto hoise: ans)
    {
        cout << hoise;
    }
    cout <<"\n";
}
int main()
{
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