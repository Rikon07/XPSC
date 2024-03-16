#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    //string alpha = "abcdefghijklmnopqrstuvwxyz";
    map<char, int> mp;
    int n = str.size();
    sort(str.begin(), str.end());
    char ans;
    bool found = false;
    for(char ch='a'; ch<='z'; ch++)
    {
        mp[ch] = 0;
    }
    for(int i=0; i<n; i++)
    {
        mp[str[i]] = 1;
    }
    for(auto it: mp)
    {
        if(it.second == 0)
        {
            ans = it.first;
            found = true;
            break;
        }
    }
    if(found)
        cout << ans <<"\n";
    else
        cout << "None\n";
    return 0;
}