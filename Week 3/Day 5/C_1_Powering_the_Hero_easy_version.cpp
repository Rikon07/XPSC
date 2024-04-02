#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll solve(int n)
{
    vector<int> ar(n);
    multiset<int> st;

    ll ans = 0;
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
        if(ar[i] != 0)
            st.insert(ar[i]);
        else if(ar[i] == 0)
        {
            if(!st.empty())
            {
                auto it = st.end();
                    --it;
                int lastEle = *it;
                //cout << lastEle <<"\n";
                ans += lastEle;
                st.erase(it);
            }
        }
    }
    return ans;
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