#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int LIS(int n)
{
    vector<int> ar(n);
    map<int, int> mp;
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
        mp[ar[i]]++;
    }
    int cnt1 = 0, cnt2 = 0;
    for(auto it : mp)
    {
        if(it.second>1)
        {
            cnt1++, cnt2++;
        }
        else
        {
            if(cnt1>cnt2) cnt2++;
            else cnt1++;
        }
    }
    return min(cnt1, ++cnt2);
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;

        cout << LIS(n) <<'\n';
    }
    return 0;
}
