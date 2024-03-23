#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
void solve()
{
    int n, x;
        cin >> n >> x;
    vector<int> ar;
    for(int i=0; i<n; i++)
    {
        int ele;
            cin >> ele;
        if(ele != x)
            ar.pb(ele);
    }
    if(ar.size() == 0)
    {
        cout <<"\n";
        return;
    }
    for(auto element: ar)
    {
        cout << element <<" ";
    }
    cout <<"\n";
}
int main()
{
    solve();
    
    return 0;
}