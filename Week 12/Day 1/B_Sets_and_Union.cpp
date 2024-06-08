#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define Yes cout << "YES\n"
#define No cout << "NO\n"
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<unordered_map<int, int>> ar(n);
        map<int, int> mp;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            for(int j=0; j<x; j++)
            {
                int val;
                cin >> val;
                mp[val] = 1;
                ar[i][val] = 1;
            }
        }
        int cnt = 0;
        for(auto it : mp)
        {
            set<int> st;
            for (int i = 0; i < n; i++)
            {
                if(ar[i][it.first] == 0)
                {
                    for(auto it : ar[i])
                    {
                        if(it.second > 0)
                            st.insert(it.first);
                    }
                }
            }
            if(cnt < st.size())
                cnt = st.size();
        }
        cout << cnt <<'\n';
    }
    return 0;
}