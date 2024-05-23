#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> ar(n), tr(m);
    multiset<int> st;
    for(int i=0; i<n; i++)
    {    
        cin >> ar[i];
        st.insert(ar[i]);
    }
    for(int i=0; i<m; i++)
        cin >> tr[i];
    
    
    for(int i=0; i<m; i++)
    {
        int maxi = tr[i];
        auto it = st.upper_bound(maxi);

        if(it == st.begin())
        {
            cout << -1 <<'\n';
        }
        else
        {
            it--;
            st.erase(it);
            cout << *it <<'\n';
        }
    }
    return 0;
}