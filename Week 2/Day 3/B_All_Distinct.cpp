#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int solve(int n)
{
    set<int> st;
    for(int i=0; i<n; i++)
    {
        int ele;
            cin >> ele;
        st.insert(ele);
    }
    int len = st.size();

    if((n-len)%2 == 0) return len;
    else return --len;
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