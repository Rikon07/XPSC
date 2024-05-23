#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
    int n;
        cin >> n;
    vector<int> ar(n);
    for(int i=0; i<n; i++)
        cin >> ar[i];

    int longest = 0, l=0, r=0;
    set<int> st;
    while(l<n && r<n)
    {
        while(r<n && !st.count(ar[r]))
        {
            st.insert(ar[r]);
            longest = max(longest, r-l+1);
            r++;
        }
        while(r<n && st.count(ar[r]))
        {
            st.erase(ar[l]);
            l++;
        }
    }

    cout << longest <<'\n';
    return 0;
}