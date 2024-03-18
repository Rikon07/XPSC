#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin >> n;
    vector<int>ar(n);
    map<int, int> mp;
    for(int i=1; i<=n; i++)
    {
        mp[i] = 0;
    }
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
        mp[ar[i]]++;
    }
    for(auto num: mp)
    {
        if(num.second == 0)
        {
            cout << num.first;
            break;
        }
    }
    return 0;
}