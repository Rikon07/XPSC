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
    int max_ele = 0, op = 0;
    for(auto it: mp)
    {
        if(it.second > max_ele)
            max_ele = it.second;
    }
    while(max_ele < n)
    {
        int rem = n - max_ele;
        int add = max_ele;
        op++;
        max_ele += min(add, rem);
        op += min(rem, add);
    }
    return op;
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