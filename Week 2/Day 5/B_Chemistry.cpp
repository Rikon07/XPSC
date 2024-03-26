#include<bits/stdc++.h>
using namespace std;
 
string solve(int n, int k)
{
    string s;
    cin >> s;
    map<char, int> mp;
    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]]++;
    }
    for(auto it: mp)
    {
        if(it.second % 2 == 1){
            k--;
        }
    }
    if(k < -1) return "NO";
    else return "YES";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, k;
        cin >> n >> k;
        cout << solve(n, k) <<"\n";
    }
    return 0;
