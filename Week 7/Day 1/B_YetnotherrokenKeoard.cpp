#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int test;
    cin >> test;
    for(int t=1; t<=test; t++)
    {
        string s;
        cin >> s;
        int siz = s.size();
        vector<pair<char, int>> a;
        vector<pair<char, int>> b;
        vector<pair<char, int>> res;
        for (int i = 0; i < siz; i++)
        {
            if(s[i] <= 'Z')
            {
                if(s[i] == 'B')
                {
                    if(a.size() > 0)
                    {
                        a.pop_back();
                    }
                }
                else
                {
                    a.emplace_back(s[i], i);
                }
            }
            else
            {
                if(s[i] == 'b')
                {
                    if(b.size() > 0)
                    {
                        b.pop_back();
                    }
                }
                else
                {
                    b.emplace_back(s[i], i);
                }
            }
        }
        for(auto x : a)
        {
            res.push_back(x);
        }
        for(auto y : b)
        {
            res.push_back(y);
        }
        sort(res.begin(), res.end(), [](const auto &a, const auto &b)
        {
            return a.second < b.second;
        });
        for(auto it : res)
        {
            cout << it.first;
        }
        cout << "\n";
    }
    return 0;
}
