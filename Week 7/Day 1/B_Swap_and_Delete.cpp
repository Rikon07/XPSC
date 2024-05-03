#include<bits/stdc++.h>
using namespace std;
int solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int tmp = n;
    map<char, int> mp;
    if(n == 1) return 1;
    for(int i=0; i<n; i++)
    {
        mp[s[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        if(s[i] == '1')
        {
            if(mp['0'] == 0)
            {
                tmp = i;
                break;
            }
            mp['0']--;
        }
        else
        {
            if(mp['1'] == 0)
            {
                tmp = i;
                break;
            }
            mp['1']--;
        }
    }
    return n - tmp;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        cout << solve() <<"\n";
    }
    return 0;
}
