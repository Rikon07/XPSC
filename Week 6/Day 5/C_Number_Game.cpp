#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
bool Parbe(vector<int> ar, int n, int k)
{
    multiset<int> st;
    for(auto ele: ar)
        st.insert(ele);
    
    for(int i=1; i<=k; i++)
    {
        if(st.empty()) return false;
        int req = k-i+1;
        auto it = st.upper_bound(req);
        if(it == st.begin()) return false;
        it--;
        st.erase(it);
        if(!st.empty())
        {
            it = st.begin();
            int bob_add = (*it);
            bob_add += req;
            st.erase(it);
            st.insert(bob_add);
        }
    }
    return true;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<int> ar(n);
        for(int i=0; i<n; i++)
            cin >> ar[i];
        
        int k, l=0, r=n, mid;
        while(l<=r)
        {
            mid = l+(r-l)/2;
            if(Parbe(ar, n, mid))
            {
                k = mid;
                l = mid+1;
            }
            else
            {
                r = mid-1;
            }
        }
        cout << k <<'\n';
    }
    return 0;
}