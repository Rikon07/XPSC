#include<bits/stdc++.h>
using namespace std;
#define Yes cout << "YES\n"
#define No cout << "NO\n"
void solve()
{
    int n;
    cin >> n;
    vector<int> ar(n);
 
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    for(int i=1; i<n-1; i++)
    {
        if(ar[i] > ar[i-1] && ar[i] > ar[i+1])
        {
            Yes;
            cout << i <<" "<< i+1 <<" "<< i+2 <<"\n";
            return;
        }
    }
    No;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
